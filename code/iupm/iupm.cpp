/*

The Infinity Universe Programming Language Official Package Manager,
Version 1.0.

*/

#include "cli/cli.hpp"

#ifndef _IUPM_MAIN_
#define _IUPM_MAIN_

int main(int argc, char** argv) {
	return iupm::cli::cli(argc, argv);
}

#endif
