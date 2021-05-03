//////////////////////////////////////////////////////
// sixth.cpp
// Program to Count # of characters 
// One is expected to use I/O redirection operator
// ( < ) to give the input file name.
// g++ -o file_stat.exe sixth.cpp
// ./file_stat.exe < sixth.cpp
//  cl /Fefile_stat.exe sixth.cpp
//  file_stat.exe < sixth.cpp
#include <stdio.h>
int main( int argc , char **argv ){
    int ccount=0;  // character count
    int c = 0; // next character
    // while not end of the file ( use I/O redirection for the input )
    while (( c = getchar() ) != EOF ){ ccount++; }
    printf("Character Count = %d\n",ccount);
}