/*

Part of The Infinity Universe Programming Language Project, Version 1.0.

*/

#include <iostream>
#include <string>
//#include "../lang/interpret.hpp"
#include "../../slib/color.hpp"

#ifndef _INFU_REPL_REPL_
#define _INFU_REPL_REPL_

namespace infu {
	namespace repl {
		int repl() {
			int _bra = 0;
			while(1) {
				std::string _inp;
				std::cout << "infu > ";
				std::getline(std::cin, _inp);
				
			}
		}
		/*
		void repl() {
		}
		*/
	}
}

#endif
