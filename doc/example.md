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
call.py 'print("hello world")';
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
#}
io.out "you can also" #{ test #} " do this";
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
}
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
	}
	"2" {
		io.out "second";
	}
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
use std.io std.limit;
var x="10" y=10 z=97;
limit.int x;
limit.str y;
limit.ch z;
io.out x ' ' y ' ' z;
```

# Get Corrent Time
```
use std.io std.time;
io.out `time.get`;
```

# String Operation
```
use std.io;
var str;
str="";
str+=10;
limit.str str;
str++=" times 100";
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
