///////////////////////////////////
// ten.cpp
// A C/C++ program to spit the environmental variables
// g++ -oenvspitter.exe ten.cpp
// cl /Feenvspitter.exe ten.cpp
#include <stdio.h>
int  main( int argc , char **argv , char **envp ){
   char **temp = envp;
   while (*(temp+1) != 0 ) {
           puts(*temp);
           temp++;
   }
   return 0;
}
