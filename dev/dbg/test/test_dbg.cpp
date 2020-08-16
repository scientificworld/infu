#include <iostream>
#include <string>
//#include "infu_pre_comment_t1.hpp"
#include "slib_item_t1.hpp"
#include "slib_match_t1.hpp"
#include "slib_part_t1.hpp"

void test(std::string _msg) {
	std::cout << std::endl << "Testing " << _msg << " ..." << std::endl;
}

int main() {
	std::cout << "Testing ...";
	//test("infu_pre_comment_t1");
	//infu_pre_comment_t1();
	test("slib_item_t1");
	slib_item_t1();
	test("slib_match_t1");
	slib_match_t1();
	test("slib_part_t1");
	slib_part_t1();
	return 0;
}
