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
use std.io std.call;
call.py "print("hello world")";
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
animal rabbit;
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
use std.io std.time;
when 0 {
	io.out "meow!"
	time.wait 200;
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
use std.io std.time;
io.out `time.get`;
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
use std.io std.rand;
var num;
rep 5 {
	num=`rand.int`;
	io.out num;
	io.nl;
};
io.out "5 random numbers generated."
```

# Useful tools
```
use std.io std.tool;
var x y;
io.in x y;
tool.swp x y;
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
io.out info_ver " " info_digit;
```

# New Type
```
use std.io std.str;
fun i2b:bool x:int {
	if x == 0 { ret yes; }
	elif x == 1 { ret no; } # else if == elif == elsif == elseif ???
	else;
};
fun b2i:int x:bool {
	if x == yes { ret 0; };
	if x == no { ret 1; };
};
type bin {
	fun todec:int i:bin {
		var j:int=1 k:int=0 l:int=0;
		rep `size i` {
			k+=bin.
		};
		ret k;
	}
	redi + a:bin b:bin {
		ret `tobin `todec a` + `todec b``;
	};
	# oper = x:str
	redi = x:str {
		var z[..]:bool;
		var y:int=0;
		var w;
		rep `str.size x` {
			w=`str.cut x y`;
			if ( w == 0 ) || ( w == 1 )
				z[y]=`i2b w`;
			y+=1;
		};
		ret z;
	};
};
var p:bin q:bin m:bin n:bin;
io.int p q m n;
io.out p+q+m+n;
```

# Download a File
```
use std.io std.web;
val url="github.com";
io.out `web.get url`;
```

# Useful Tools 2
```
use std.io std.tool;
var (x y z):int;
io.in x y z;
io.out `tool.max x y z` " " `tool.min x y z`;
```

# Default Value
```
use std.io;
var x:int=@;
io.out x; # Output: 0
```

# Use A Package from the Internet
```
use pack.test;
test "io";
```

# Preprocessing
```
use std.io;
#[if os == windows]{
	io.out "compiled on windows"
};
#[elif os == macos || os == *nix || os == linux || os == *bsd]{
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
use std.io std.str;
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
io.out `time.get` ": " `rand.int`;
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
