/*
* spacelib_find_hpp , version 1.0
* This file is included in spacelib.
* It is under the WTFPL licence.
*/

#include <string>
#include "match.hpp"

#ifndef _SLIB_FIND_HPP_
#define _SLIB_FIND_HPP_

namespace space {
	int find_next(std::string x,std::string y,int z=0) {
		for(int w=z;w<x.size()-y.size();w++) {
			if(space::match()) return w;
		}
		return -1;
	}
	int find_last(std::string x,std::string y,int z=string::npos) {
		if(z==string::npos) z=x.size()-1;
		for(int w=z;w>y.size();w--) {
			if(space::rmatch()) return w;
		}
		return -1;
	}
	// TODO: find_all
}
