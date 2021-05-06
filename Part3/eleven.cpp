///////////////////////////////////
// eleven.cpp
// A C/C++ program to demonstrate pointers
// g++ -oeleven.exe eleven.cpp
// cl /Feeleven.exe eleven.cpp
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int  main( int argc , char **argv , char **envp ){
   int arr[] = { 0,2,4,5,6};
   int arr_count = sizeof(arr)/sizeof(arr[0]);
   //--- allocate dynamic memory 
   int *parr = (int *) malloc(sizeof(int) * arr_count);
   //----- if failed, print failure and exit 
   if ( parr == 0 ) { printf("Memory Allocation Failure\n"); return 0;}
   memcpy(parr,arr,arr_count*sizeof(int));
   int *temp = parr;
   for(int i=0; i<arr_count; ++i ) {
                printf("%p\t%d\n", temp, *temp );
                temp++;
   }
   free(parr); // free memory from the heap
   return 0;
}


