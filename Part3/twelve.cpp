///////////////////////////////////
// twelve.cpp
// A C/C++ program to demonstrate (double) pointers
// g++ -otwelve.exe twelve.cpp
// cl /Fetwelve.exe twelve.cpp
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int  main( int argc , char **argv , char **envp ){
   double arr[] = { 0.3,2.0,4,5.0,6.2};
   int arr_count = sizeof(arr)/sizeof(arr[0]);
   //--- allocate dynamic memory 
   double *parr = (double *) malloc(sizeof(double) * arr_count);
   //----- if failed, print failure and exit 
   if ( parr == 0 ) { printf("Memory Allocation Failure\n"); return 0;}
   memcpy(parr,arr,arr_count*sizeof(double));
   double  *temp = parr;
   for(int i=0; i<arr_count; ++i ) {
                printf("%p\t%g\n", temp, *temp );
                temp++;
   }
   free(parr); // free memory from the heap
   return 0;
}


