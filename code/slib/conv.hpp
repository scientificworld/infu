/*
* spacelib_conv_hpp , version 1.0
* This file is included in spacelib.
* It is under the WTFPL licence.
*/

#include <string>

#ifndef _SLIB_CONV_HPP_
#define _SLIB_CONV_HPP_

namespace space {
	// TODO: conv (use template), _conv (also use template), and more...
	char conv_i_c(unsigned int _dat) {
		if(_dat>=10) return 0;
		else return _dat+'0';
	}
	std::string conv_i_s(int _dat) {
		std::string _str="";
		do {
			_str=conv_i_c(_dat%10)+_str;
			_dat/=10;
		} while(_dat);
		return _str;
	}
}

#endif
