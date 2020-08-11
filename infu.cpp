/*

The Infinity Universe Programming Language Official Interpreter & Compiler.

Version 1.0, PL Standard 0_1.

*/

#include "code/infu/cli/cli.hpp"

#ifndef _INFU_MAIN_
#define _INFU_MAIN_

int main(int argc, char** argv) {
	return infu::cli::cli(argc, argv);
}

#endif
