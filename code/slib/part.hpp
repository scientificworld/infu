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
	int part_match(std::string a,int b=0,char c='(',char d=')') {
		// TODO: more arguments
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
