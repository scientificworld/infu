#include "../../code/slib/color.hpp"
#include <iostream>
#include <fstream>

void slib_color_t2() {
	std::ofstream fout;
	fout.open("slib_color_t2.txt");
	fout << space::gcol(1);
	std::cout << space::_high << "high~~";
	std::cout << space::_res << std::endl;
	std::cout << space::_low << "low~~";
	std::cout << space::_res;
}
