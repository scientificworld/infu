/*
* spacelib_item_hpp , version 1.0
* This file is included in spacelib.
* It is under the WTFPL licence.
*/

#include <string>

#ifndef _SLIB_ITEM_HPP_
#define _SLIB_ITEM_HPP_

namespace space {
	char next_item(std::string x,int y,bool z=true) {
		if(x.size()-1<=y) return 0;
		else {
			char w=x[++y];
			while(1) {
				if(w!=' '&&w!='\t'&&(z!=true||w!='\n')) {
					return w;
				}
				else {
					if(x.size()-1>y) w=x[++y];
					else return 0;
				}
			}
		}
	}
	char last_item(std::string x,int y,bool z=true) {
		if(y<=0) return 0;
		else {
			char w=x[--y];
			while(1) {
				if(w!=' '&&w!='\t'&&(z!=true||w!='\n')) {
					return w;
				}
				else {
					if(y>0) w=x[--y];
					else return 0;
				}
			}
		}
	}
	// TODO: next_sub, last_sub
}

#endif
