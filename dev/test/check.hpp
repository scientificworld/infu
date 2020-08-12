#include <iostream>
#include <string>

#ifndef _CHECK_
#define _CHECK_

void check(bool _val, std::string _msg1 = "Yes", std::string _msg2 = "No") {
	if(_val) std::cout << _msg1 << ' ';
	else std::cout << _msg2 << ' ';
}

#endif
