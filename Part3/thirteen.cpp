///////////////////////////////////
// twelve.cpp
// A C/C++ program to demonstrate (double) pointers
// g++ -otwelve.exe twelve.cpp
// cl /Fetwelve.exe twelve.cpp
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//----- a Toy Bubble Sort Example
void Sort( double arr[] , int elem ){
      int n = elem;
      for(int i=0; i< n ; ++ i )
        for(int j=0; j<n; ++j)
           if ( arr[i] < arr[j] ) {  double temp = arr[i]; arr[i] = arr[j]; arr[j] = temp;}
}

int  main( int argc , char **argv , char **envp ){
   if ( argc == 1 ) { printf("No command line arguments\n"); return 0; }
   int arr_count = argc-1;
   //--- allocate dynamic memory 
   double *parr = (double *) malloc(sizeof(double) * arr_count);
   //----- if failed, print failure and exit 
   if ( parr == 0 ) { printf("Memory Allocation Failure\n"); return 0;}
   int i=1; double *tparr = parr;
   while (i < argc ) { *tparr++ = atof(argv[i]); i++; }
   Sort(parr,arr_count);
   double  *temp = parr;
   for(int i=0; i<arr_count; ++i ) {
                printf("%p\t%g\n", temp, *temp );
                temp++;
   }
   free(parr); // free memory from the heap
   return 0;
}


