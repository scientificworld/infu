# Hello World
```
use std.io;
io.out "hello world";
```

# Input your name
```
use std.io;
var x;
io.out "please enter your name:";
io.in x;
io.out "hello," x;
io.nl; # nl -> new line
```

# Call other programming language
```
use std.io ext.call;
call.py "print(\"hello world\")";
io.out "\nhello everyone!";
```

# Comments
```
use std.io;
io.out "nice to meet you!";
# io.out "this sentence won't output";
#{
this
is
a
multi-line
comment
}
io.out "you can also" #{ test } " do this";
```

# Function
```
use std.io;
fun add x y {
	ret x+y;
};
io.in a b;
io.out `add a b`;
```

# Class / Struct / Namespace
```
use std.io;
com animal {
	var age size height kind;
};
# animal rabbit;
com rabbit=animal;
rabbit.kind="rabbit";
rabbit.age=1;
```

# Repeat
```
use std.io;
rep 5 {
	io.out "welcome!";
	io.nl;
};
```

# While...
```
use std.io std.tim;
when 0 {
	io.out "meow!"
	tim.wait 200;
	io.nl;
}; # forever
```

# If...
```
use std.io;
var test;
io.in test;
if test == "hello" {
	io.out "world";
};
else {
	io.out "hello world";
};
```

# Switch Case
```
use std.io;
var xyz;
io.in xyz;
case xyz {
	"1" {
		io.out "first";
	};
	"2" {
		io.out "second";
	};
	io.out "neither";
};
```

# Your Own Library

## myio.infu
```
use std.io;
# mod myio;
com myio {
	fun print x[] {
		var y=0;
		rep `size x` {
			io.out x[y];
			y+=1;
		};
	};
};
```

## main.infu
```
use my.myio;
myio.print "hello world!";
```

# Define a Keyword
```
use std.io;
def out io.out;
def in io.in;
var a;
in a;
out a;
```

# Exit Before The Program Ends
```
use std.io;
io.out "hello";
ret 0;
io.out " no world";
```

# Goto A Place
```
use std.io;
io.out 1;
io.out 2;
jmp jump;
io.out 3;
lab jump {
	io.out 4;
	io.out 5;
};
io.out 6;
io.out 7;
io.out 8;
jmp jump2;
io.out 9;
lab jump2;
io.out 10;
#{
jmp jump3;
io.out 11;
jump3:;
io.out 12;
} # Deprecated
# Output: 1 2 4 5 6 7 8 10
```

# Variable & Array
```
use std.io;
var x y[..]=("hello" "world") z=`size y`; # Y is an infinite array
io.in x;
io.out x;
io.tab;
rep 5 {
	io.in y[z];
	z+=1;
};
var w=0;
rep `size y` {
	io.out y[w];
	w+=1;
};
del w z;
```

# Set The Variable Type
```
use std.io std.lim;
var x="10" y=10 z=97;
lim.int x;
lim.str y;
lim.char z;
io.out x ' ' y ' ' z;
```

# Get Corrent Time
```
use std.io std.tim;
io.out `tim.get`;
```

# String Operation
```
use std.io std.lim;
var str;
str="";
str+=10;
lim.str str;
str+=" times 100";
io.out str;
```

# When An Error Occured
```
use std.io;
var x;
io.in x;
if x != 0 {
	io.log "an error occured.";
	io.err "input value not zero.";
};
```

# Read & Write File
```
use std.io std.file;
var name;
io.in name;
if ! `file.exist name` {
	io.err "failed to read file";
	ret 0;
}
else {
	file.open name;
	io.out `file.read`;
	file.nl;
	file.write "test file";
	io.out `file.read`;
	file.close;
};
```

# Generate random number
```
use std.io std.ran;
var num;
rep 5 {
	num=`ran.int`;
	io.out num;
	io.nl;
};
io.out "5 random numbers generated."
```

# Useful tools
```
use std.io std.tol;
var x y;
io.in x y;
tol.swp x y;
io.out x y;
```

# Type of return value
```
use std.io;
fun pow:int x:int y:int {
	var z=1;
	rep y {
		z*=x;
	};
	ret z;
};
pow 10 2;
# pow 1.2 8 # this will crash
```

# Deal With String
```
use std.io std.str;
var x:str;
io.in x;
var y=`str.size x` z=`str.count x`;
if y >= 5 { io.out `str.cut x 1 5`; };
if z >= 4 { io.nl; io.out `str.line x 2 4`; };
```

# Get System Info
```
use std.io sys.info;
io.out ver " " digit;
```

# New Type
```
use std.io;
type num {
	var data:int;
	redi x:num {
		ret x.data;
	};
	redi = x:int {
		if x >= 10 ; ret x%10;
		elif x <= 0; ret 0;
		else ; ret x;
		# elif == else if == elsif == elseif ????
	};
	redi [int] x:num { ret x.data; }
	redi +:num x:num y:num {
		var z:int=x+y;
		if z >= 10 ; ret [num](z%10);
		else ; ret [num]z;
	}
	redi -:num x:num y:num {
		var z:int=x-y;
		if z <= 0 ; ret [num]0;
		else ; ret [num]z;
	}
	redi @ {
		ret 0;
	}
};
var (x=15 y=4):num;
io.out x+y; # Output: 9
```

# Download a File
```
use std.io std.web;
val url="github.com";
io.out `web.get url`;
```

# Useful Tools 2
```
use std.io std.tol;
var (x y z):int;
io.in x y z;
io.out `tol.max x y z` " " `tol.min x y z`;
```

# Default Value
```
use std.io;
var x:int=@;
io.out x; # Output: 0
```

# Use A Package from the Internet
```
use pac.test;
test "io";
```

# Preprocessing
```
use std.io;
#[if os == windows]{
	io.out "compiled on windows"
};
#[elif os == macos || os == (*)nix || os == linux || os == (*)bsd]{
	io.out "compiled on *nix"
};
#[else]{
	#[error "failed to compile"]
	#[note "unsupported os"]
};
```

# For
```
use std.io std.str;
var x:int y:str;
io.in x y;
for z=0; y[z]!='.' && z<`size y`; z++;
	io.out y[z];
ret 0;
```

# Block
```
use std.io std.str sys.util;
fun basic_bf;
# Easy to use DSL!!
fun bf _prog:blo {
	# A Subset of brainfuck
	# Supports +,- and .
	var _line=0;
	rep `size _prog` {
		basic_bf `conv str _prog[_line]`;
		_line++;
	};
};
var _cor:char:glo=0;
fun basic_bf _prog:str {
	var _ch:int=0;
	rep `size _prog` {
		case _prog[_ch] {
			'+'{
				_cor++;
			};
			'-'{
				_cor--;
			};
			'.'{
				io.out _cor;
			};
		};
		_ch++;
	};
};
bf {
	++++++++++++++++++++++++++++++++++++++++
	.
	+.
	--
	..
	-----
	..
	-
	...
}; # Output: ()''""!!!
```

# Use Local Packages
```
use std.io loc.match;
var b:bool=`match "__()[]{}([{}])__"`;
if b == yes ; io.out "match";
else ; io.out "not match";
```

# Auto Include
```
use env;
io.out `tim.get` ": " `ran.int`;
```

# Assign to a Function
```
use std.io;
fun getline:void = io.get;
var x;
getline x;
```

# Import A Combination
```
use std.io std.call;
imp call io;
line `sh "echo "hahaha"`;
```

# Preprocessing 2
```
use std.io;
#[def _JUST_FOR_A_TEST_];
#[ifdef _JUST_FOR_A_TEST_]{
	io.out "just for a test";
};
#[undef _JUST_FOR_A_TEST_];
#[ifndef _JUST_FOR_A_TEST_]{
	io.nl;
	io.out "not just for a test";
};
```

# Printf / Scanf
```
use std.io;
var x;
scan "%d" x;
print "%c" x;
```

# Null / Nil
```
use std.io sys.num;
var x:char;
if x == nil ;
	io.out "is nil"
x=nul;
if [int]x == 0 && x == nul ;
	io.out "is null";
```

# Automatic Type Derivation
```
use std.io;
var t:auto;
t=10*100;
# t="test"; # Compile Error
if [type]t == :int ;
	io.out t;
```

# Use a Package As ...
```
use std.io=iolib;
iolib.io.out "an alias??";
```

# Set Up All the Elements
```
use std.io std.str;
var x[100]:str="(21)";
for var y=0 ; y<=100 ; y++ ; io.out x[y] ' ';
ret 0;
```

# Wide Character
```
use std.io sys.wide;
var w[]:wide="\u4f60\u597d";
io.out w;
```

# Inf & NaN
```
use std.io sys.num;
var x[..];
if `size x` == inf {
	io.out "is inf";
};
if 0/0 == nan {
	io.out "is nan";
};
```

# Slice
```
use std.io;
var x[5]=(1 2 3 4 5 6);
io.out x[0] ' ' x[1~4] ' ' x[0 1 2] ' ' x[~3] ' ' x[1~-1] ' ' x[~] ' ' x[1~];
# Output: 1 2 3 4 5 1 2 3 1 2 3 4 2 3 4 5 1 2 3 4 5 6 2 3 4 5 6
```

# For ... In ...
```
use std.io;
var y[]=("hello" "world" "hello world" "world hello");
for tmp y ; io.out tmp ' ';
```

# More Readable
```
use std.io;
{
	io.out "hello";
};
io.out "world";
```

# Slice 2
```
use std.io;
var x[9]=1 y[9]=1 z[19];
z[~9]=x;
z[10~]=y;
io.out z;
# Output: 1 1 1 1 ... (*20)
```

# Break / Continue
```
use std.io;
for var x=0;x<=4;x++ {
	if x == 2 ; bre;
	else io.out x ' ';
};
for var y=0;y<=5;y++ {
	if x == 1 ; ctn;
	else io.out y ' ';
};
# Output: 0 1 0 2 3 4 5
```

# Macro
```
```

# Enumerated Type
```
```

# Template ??
```
use std.io;
type test _type:type {
	var _dat:_type;
	fun typeof {
		ret [type]_dat;
	};
};
var _t:test::int;
io.out `_t.typeof`; # Output: int
```

# Count Time
```
use std.io std.tim;
io.out `tim.cnt `rep 10000``;
```

# Exception
```
```
