#include "../code/slib/item_dbg.hpp"
#include <iostream>

void slib_item_t1() {
	std::cout <<
	space::next_item("hello world", 4)
	<< ' ' <<
	space::next_item("more\t\tthings", 3);
}
