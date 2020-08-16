/*
* spacelib_part_hpp , version 1.0
* This file is included in spacelib.
* It is under the WTFPL licence.
*/

#include <string>
#include <algorithm>

#ifndef _SLIB_PART_HPP_
#define _SLIB_PART_HPP_

/*namespace _space {
}*/

namespace space {
	// TODO: more arguments
	int part_match_next(std::string a,int b=0,char c='(',char d=')') {
		if(a[b]!=c) return -1;
		int e=1,f=b+1;
		while(f<a.size()&&e!=0) {
			char g=a[b];
			if(g==c){ e++; std::cout<<"+ "; }
			if(g==d){ e--; std::cout<<"- "; }
			if(++f>=a.size()&&e!=0) return -1;
		}
		return f-1;
	}
	int part_match_last(std::string a,int b=std::string::npos,char c='(',char d=')') {
		if(b==std::string::npos) b=a.size()-1;
		if(a[b]!=d) return -1;
		int e=1,f=b-1;
		while(f>=0&&e!=0) {
			char g=a[b];
			if(g==c){ e--; std::cout<<"- "; }
			if(g==d){ e++; std::cout<<"+ "; }
			if(--f<0&&e!=0) return -1;
		}
		return f+1;
	}
	int part_left(std::string x,char y='{',char z='}') {
		// Impl 1
		int w=0;
		for(int u=0;u<x.size();u++) {
			char v=x[u];
			if(v==y) w++;
			if(v==z) w--;
		}
		/*if(w<0) return -1;
		else */ return w;
	}
	int _part_left(std::string x,char y='{',char z='}') {
		// Impl 2, use std::count
		int w=std::count(x.begin(),x.end(),y)-std::count(x.begin(),x.end(),z);
		/* if(w<0) return -1;
		else */ return w;
	}
}

#endif
