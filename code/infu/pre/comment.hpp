/*

Part of The Infinity Universe Programming Language Project, Version 1.0.

*/

#include <string>
#include "../../slib/item.hpp"

#ifndef _INFU_PRE_COMMENT_
#define _INFU_PRE_COMMENT_

namespace infu {
	namespace pre {
		std::string comment(std::string _cont) {
			std::string _res = "";
			for (int _cur = 0; _cur < _cont.size(); _cur++) {
				char _ch = _cont[_cur];
				if (_ch == '#') {
					char _next =
					space::next_item(_cont, _cur, false);
					if (_next == '{')
						while (_cont[_cur] != '}')
							_cur ++;
					else if (_next != '[')
						while (_cont[_cur] != '\n')
							_cur ++;
					else _res += _ch;
				}
				else _res += _ch;
			}
			return _res;
		}
	}
}

#endif // INFU_PRE_COMMENT
