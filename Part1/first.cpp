///////////////////////
// A hello world program using GNU C/C++ under Linux/Windows
// At the GNU Linux command prompt
//--------------------------------------------------
// g++ first.cpp    ( will produce a.out )
// ./a.out
// g++  -o test.exe  first.cpp  (will produce test.exe )
// ./test.exe
//  in the Visual C++ command prompt 
//--------------------------------------------------
//  cl first.cpp   ( will produce first.exe )
//  first     ( the loader will look for first.exe and execute )
//  cl /Fetest.exe first.cpp  ( will produce test.exe )
//  test.exe
#include <stdio.h>
int main( int argc , char **argv ){
	printf("Hello world \n" );
}