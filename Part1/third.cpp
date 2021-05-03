///////////////////////////////////////////
// third.cpp 
// The following program to print average of numbers
// g++ -o average.exe  third.cpp
// ./average.exe 1 3 4 5  7    ( should print the average)
// cl  /Fecmdline.exe second.cpp
//  average.exe 1 3 4 5  7    ( should print the average)
#include <stdio.h>
#include <stdlib.h>
int main( int argc , char **argv ) {
  if ( argc == 1 ) {
    printf("No command Line Argument\n");
    return 0;
  }
  double sum = 0.0;  
  for( int j=1; j< argc ; ++j )
       sum  = sum + atof(argv[j] );  //sum += atof(argv[j]);
  double average = sum/(argc-1);
  printf("The Average is %g\n" , average );
}