/////////////////////////////////////
// fourteen.cpp
// g++ -o fourteen.exe fourteen.cpp
// cl /Fefourteen.exe fourteen.cpp
// This is a simple example of function
// pointer. Function Pointers are like data
// pointers. Only difference is that we store
// Addresses of Functions
//
#include <stdio.h>
/////////////////////////////////
//
// I am creating a new data type which
// can store address of a function which
// takes two integers as parameter and returns
// an integer as result
//
typedef int (*FUNC)( int ax , int ay );
/////////////////////////////////////
//
// Let us declare two functions which
// takes two integers as parameter and
// returns an integer as result

int Add( int x, int y ) { return x+y; }
int Mul( int x, int y ) { return x*y; }

//////////////////////////////////
// Entry Point of a function
void main(){
	FUNC fp = Add;
	int rs = (*fp)(20,20); // fp(20,20);
	printf("%d\n",rs);
	fp = Mul;
	rs = fp(20,20); // (*fp)(20,20);
	printf("%d\n",rs);
}