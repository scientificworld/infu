/*

The Infinity Universe Programming Language Official Interpreter & Compiler.

Version 1.0, PL Standard 0_1.

*/

#include <iostream>
#include <string>
#include <fstream>
#include "code/infu/lang/parser.hpp"
#include "code/infu/check/chk.hpp"
//#include "code/infu/repl/repl.hpp"
#include "code/slib/scan.hpp"
#include "code/slib/filename.hpp"
using namespace std;

#ifndef _INFU_MAIN_
#define _INFU_MAIN_

const char cli_help[]="The Infinity Universe Programming Language Official Interpreter & Compiler.\n\
Version 1.0, PL Standard 0_1.\n\
\n\
Opinions:\n\
-i\tInterpret a program.\n\
-r\tOpen REPL.\n\
\n\
Example:\n\
infu -i x.iu\
";

ifstream fin;
ofstream fout;

#define OUT_HELP { cout<<cli_help; return 1; }

int cli(int argc,char** argv) {
	if(argc<=1) OUT_HELP;
	//if(scan(argv,"-r",argc)&&argc>2) OUT_HELP
	if(space::scan(argv,argc,"-r")) {
		if(space::scan(argv,argc,"-i")) OUT_HELP
		infu::repl::repl();
		return 0;
	}

	string name,last,file;
	last=space::slfn(name);
	if(last!=".infu"&&last!=".iu") OUT_HELP
	fin.open(name);
	fin>>file;
	bool ret_var=infu::check::chk(file);
	if(ret_var==true){
		infu::lang::parser(file);
		return 0;
	}
	else return 1;
}

int main(int argc,char** argv) {
	return cli(argc,argv);
}

#endif
