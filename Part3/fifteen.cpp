///////////////////////////////////////////
// fifteen.cpp
//
// The following program will Sort a set of numbers given 
// as command line arguments
//
//  fifteen.exe  1 3 -5 6 5 10
//
//  cl /DWIN_64 -o fifteen.exe fifteen.cpp
//  g++ -o fifteen.exe fifteen.cpp
//
//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//------- Windows require __cdecl callung convention for signum function
#ifdef WIN_64
	#define 	CALL_CONV __cdecl 
#else
	#define 	CALL_CONV 
#endif 

int CALL_CONV CmpFn(const void *dblone,const void *dbltwo ){
	double a = *(double *)dblone; double b = *(double *)dbltwo;
	return  ( a > b ) ? 1 : (b > a ) ? -1 : 0;
}

int main( int argc , char **argv ){
	if ( argc == 1 ){
		fprintf(stdout,"No command line arguments\n");
		return -1;
	}
	int num = argc-1;
	double *arr = (double *) malloc(num*sizeof(double));
	if ( arr == 0 ) { return -1; }
	double *parr = arr; char **nums = &argv[1];
	while (num--) { *parr++ = atof(*nums++); }
                   // consult documentation of qsort (stdlib.h)
	qsort(arr,argc-1,sizeof(double),CmpFn);
	num = 0;
	while (num < argc-1 ) { printf("%g\n",arr[num++]); }
	free(arr);
	return 0;
}