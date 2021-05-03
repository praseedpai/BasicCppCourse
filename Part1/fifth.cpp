///////////////////////
// fifth.cpp
// Copy a File by converting it to an upper case..
#include <stdio.h>
#include <ctype.h>
int main( int argc , char **argv ){
	int c ;
                   while ((c= getchar())!= EOF )
		putchar(toupper(c));
}