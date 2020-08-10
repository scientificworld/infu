/*

Part of The Infinity Universe Programming Language Project, Version 1.0.

*/

#include <string>

#ifndef _INFU_FMT_FMT_PRE_
#define _INFU_FMT_FMT_PRE_

namespace infu {
	namespace fmt {
		std::string fmt_pre(std::string _cont) {
			std::string _res = "";
			bool _quote = false, _nl = false;
			int _space = 0;
			char _ch, _pre = NULL;
			for (int _cur = 0; _cur < _cont.size(); _cur++) {
				_ch = _cont[_cur];
				if (_cur != 0) _pre = _cont[_cur-1];
				if (_ch == '"' && _pre != '\\')
					_quote = _quote == false ? true : false;
				if (_ch == ' ') {
					if (_quote == false) {
						_space ++;
						if (_space == 1) _res += ' ';
					}
					else _res += ' ';
				}
				else {
					_res += _ch;
					_space = 0;
				}
			}
			return _res;
		}
	}
}

#endif // INFU_FMT_FMT_PRE
