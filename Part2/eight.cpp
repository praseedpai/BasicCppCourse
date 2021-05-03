//////////////////////////////////////////////////////
// eight.cpp
// Program to Count # of characters , words and  Lines
// One is expected to use I/O redirection operator
// ( < ) to give the input file name.
// g++ -o file_stat.exe eight.cpp
// ./file_stat.exe < eight.cpp
//  cl /Fefile_stat.exe eight.cpp
//  file_stat.exe < eight.cpp
//  Adapted from K&R book (2nd Edition Page #20)
//             Section 1.5.4 - Word counting 
#include <stdio.h>
#define IN 1
#define OUT 0
int main( int argc , char **argv ){
    int ccount=0;  // character count
    int lncount = 0; // line count
    int wccount = 0; //word count 
    int c = 0; // next character
    int state = OUT ;
    // while not end of the file ( use I/O redirection for the input )
    while (( c = getchar() ) != EOF ){ 
	ccount++; 
                  if ( c == '\n'  ) { lncount++; }
                  if ( c == ' ' || c == '\t'   || c == '\n' ) { 
		state = OUT; 
                 } else if ( state == OUT ) { state = IN;  wccount++; }
                  
   }
    printf("Character Count = %d\n",ccount);
    printf("Line count = %d\n", lncount );
    printf("Word count = %d\n", wccount );
}