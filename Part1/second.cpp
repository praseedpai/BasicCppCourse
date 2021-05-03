///////////////////////////////////////////
// second.cpp 
// The following program spits out the command line argument
// At the   GNU Linux terminal
// ============================
// g++ -o cmdline.exe  second.cpp
// ./cmdline.exe     one two three     ( should print the arguments)
// At the Visual C++ command prompt
//==========================
// cl /Fecmdline.exe second.cpp
//  cmdline.exe one two three ( should print the arguments)
#include <stdio.h>
int main( int argc , char **argv ) {
  if ( argc == 1 ) {
    printf("No command Line Argument\n");
    // argc will be at least 1 in the case of C/C++ Programs
    // argv[0] will contain the executable name
    return 0;
  }
  //---------------- Print the Executable name
  printf("%s\n", argv[0] );
  //------------- Spit the rest of the arguments
  for( int j=1; j< argc ; ++j )
    puts(argv[j]);
}