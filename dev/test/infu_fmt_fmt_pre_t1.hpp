#include "../../code/infu/fmt/fmt_pre.hpp"
#include <iostream>

void infu_fmt_fmt_pre_t1() {
	std::cout <<
	infu::fmt::fmt_pre("hello world")
	<< ' ' <<
	infu::fmt::fmt_pre("hello  world")
	<< ' ' <<
	infu::fmt::fmt_pre("world    hello")
	<< ' ' <<
	infu::fmt::fmt_pre("\"hello  world\"")
	<< ' ' <<
	infu::fmt::fmt_pre("\"\\\"hello  world\\\"\"");
}
