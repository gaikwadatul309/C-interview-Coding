/*
 * Authour: Atul Gaikwad and Rishi Suri
 * Program: Differentiate between
	   const int * p;
	   int const * p
	   int * const p = &x;
	   const int * const p = &x;
	   Try *p=20, p++, (*p)++, p=&y in each case

*/

#include<stdio.h>
int main(){
	int a=5,y=5;
	const int * p;
	p=&a;
	// a++; allowed
	// ++*p; not allowed
	
	// *p=20; not allowed
	// p++; allowed (print Garbage)
	// (*p)++ not allowed
	p=&y; // allowed
	
	
	int x=10;
	int * const q = &x;
	// q=&x; not allowed 
	// *q=20; allowed
 	// q++; not alloed 
 	(*q)++; // allowed q= 11
 	// q=&y; not allowed 
 	
 	printf("q=%d",*q);
	
	
	
	return 0;
}
