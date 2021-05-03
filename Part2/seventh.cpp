//////////////////////////////////////////////////////
// seventh.cpp
// Program to Count # of characters and Lines
// One is expected to use I/O redirection operator
// ( < ) to give the input file name.
// g++ -o file_stat.exe seventh.cpp
// ./file_stat.exe < seventh.cpp
//  cl /Fefile_stat.exe seventh.cpp
//  file_stat.exe < seventh.cpp
#include <stdio.h>
int main( int argc , char **argv ){
    int ccount=0;  // character count
    int lncount = 0;
    int c = 0; // next character
    // while not end of the file ( use I/O redirection for the input )
    while (( c = getchar() ) != EOF ){ 
	ccount++; 
                  if ( c == '\n' ) { lncount++; }
   }
    printf("Character Count = %d\n",ccount);
    printf("Line count = %d\n", lncount );
}