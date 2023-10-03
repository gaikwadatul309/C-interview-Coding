/*
 * Authour: Rishi suri & Atul Gaikward
 * Program: print lastelement of array  irrespective pf length using pointer notation
*/
#include<stdio.h>
int main(){
	int arr[5]={1,2,3,4,5};
	
	int *p=(&arr+1);
	printf("*p = %d\n", *(p-1));
	return 0;
}
	
