# A C project template
Set up such that you should be able to simply
add your .c file(s) into src and have it work
with no additional effort required. this only
works sometimes. Only works with clang and gcc,
since msvc uses entirely different flags, which
makes things difficult

## Basic usage
 - install [scons](https://scons.org/pages/download.html)
 - add your code to ./src
 - open your terminal and run scons
 - grab the compiled binary out of ./out

if this doesn't work, read the error and adjust
the scons build files accordingly
