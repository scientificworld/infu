#include "../../code/slib/part.hpp"
#include <iostream>

void slib_part_t1() {
	const char _dat[] = "(format t \"hello world\")";
	std::cout <<
	space::part_match_next(_dat)
	<< ' ' <<
	space::part_match_last(_dat);
}
