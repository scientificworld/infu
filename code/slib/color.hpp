/*
* spacelib_color_hpp , version 1.0
* This file is included in spacelib.
* It is under the WTFPL licence.
*/

#include <iostream>
#include <string>
#include "conv.hpp"

#ifndef _SLIB_COLOR_HPP_
#define _SLIB_COLOR_HPP_

namespace space {
	void _scol(int _col) {
		std::cout<<"\e["<<_col<<'m';
	}
	const char* gcol(int _col) {
		std::string _str="\e["+conv_i_c(_col)+'m';
		return _str.data();
		// _str.data() == _str.c_str()
	}
	const char* RESET=gcol(0),HIGHLIGHT=gcol(1),LOWLIGHT=gcol(2);
	const char* _res=RESET,_high=HIGHLIGHT,_low=LOWLIGHT,_hl=HIGHLIGHT,_ll=LOWLIGHT;
}

#endif
