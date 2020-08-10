/*

Part of The Infinity Universe Programming Language Project, Version 1.0.

*/

#include <string>

#ifndef _INFU_PRE_LIB_
#define _INFU_PRE_LIB_

namespace infu {
	namespace pre {
		std::string lib(std::string _name) {
			// Currently Support: std
			int _find = _name.find('.');
			if (_find == std::string::npos) return NULL;

		}
	}
}

#endif // INFU_PRE_LIB
