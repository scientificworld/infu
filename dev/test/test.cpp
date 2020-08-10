#include <iostream>
#include <string>
#include "infu_fmt_fmt_pre_t1.hpp"
#include "infu_pre_comment_t1.hpp"

void test(std::string _msg) {
	std::cout << std::endl << "Testing " << _msg << " ..." << std::endl;
}

int main() {
	std::cout << "Testing ...";
	test("infu_fmt_fmt_pre_t1");
	infu_fmt_fmt_pre_t1();
	test("infu_pre_comment_t1");
	infu_pre_comment_t1();

	return 0;
}
