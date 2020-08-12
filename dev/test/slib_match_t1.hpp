#include "../../code/slib/match.hpp"
#include "check.hpp"
#include <iostream>

void slib_match_t1() {
	const char x[] = "hello world hello", y[] = "world";
	check(space::match(x,y), "Match", "Not match");
	check(space::match(x,y,6), "Match", "Not match");
}	
