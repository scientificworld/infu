#include "../../code/infu/pre/comment.hpp"
#include <iostream>

void infu_pre_comment_t1() {
	const char _dat[] =
	"1234 # 5678 \n\
	0123 #{\n\
	haha\n\
	}\n\
	9876 #[ test ]\
	";
	std::cout <<
	infu::pre::comment(_dat);
}
