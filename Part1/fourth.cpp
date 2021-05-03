#include <stdio.h>
//------------------------ How to Copy a Text File ?!!!
int main( int argc , char **argv )
{
                  int c = 0;
	while ((c=getchar()) != EOF )
		putchar(c);
}