/*

Part of The Infinity Universe Programming Language Project, Version 1.0.

*/

#include <iostream>
#include <string>
#include "../lang/interpret.hpp"
// #include "../../slib/color.hpp"
#include "../../slib/part.hpp"

#ifndef _INFU_REPL_REPL_
#define _INFU_REPL_REPL_

namespace infu {
	namespace repl {
		int repl() {
			int _bra = 0;
			std::string _inp, _line;
			while(1) {
				std::cout << "infu > ";
				std::getline(std::cin, _inp);
				// _part = space::part_left(_inp);
				_bra += space::part_left(_inp);
				while(_bra != 0) {
					_inp += '\n';
					std::cout << "infu >> ";
					std::getline(std::cin, _line);
					_bra += space::part_left(_line);
					_inp += _line;
				}
				std::cout << _inp << std::endl;
				infu::lang::interpret(_inp);
			}
		}
		/*
		void repl() {
		}
		*/
	}
}

#endif
