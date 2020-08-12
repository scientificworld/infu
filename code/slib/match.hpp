/*
* spacelib_match_hpp , version 1.0
* This file is included in spacelib.
* It is under the WTFPL licence.
*/

#include <string>

#ifndef _SLIB_MATCH_HPP_
#define _SLIB_MATCH_HPP_

namespace space {
	bool match(std::string x,std::string y,int z=0) {
		if(x.size()==0||y.size()==0) return false;
		if(z>=x.size()||z+y.size()>x.size()) return false;
		int w=0;
		while(w<y.size()&&w+z<x.size()) {
			if(x[w]!=y[w]) return false;
			w++;
		}
		return true;
	}
}

#endif
