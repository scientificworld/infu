#include <iostream>
#include <string>
#include "infu_fmt_fmt_pre_t1.hpp"
#include "infu_pre_comment_t1.hpp"
#include "slib_match_t1.hpp"

#ifndef _TEST_
#define _TEST_

void test(std::string _msg) {
	std::cout << std::endl << "Testing " << _msg << " ..." << std::endl;
}

#endif

int main() {
	std::cout << "Testing ...";
	test("infu_fmt_fmt_pre_t1");
	infu_fmt_fmt_pre_t1();
	test("infu_pre_comment_t1");
	infu_pre_comment_t1();
	test("slib_match_t1");
	slib_match_t1();
	
	return 0;
}
