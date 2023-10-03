/*
 * Authour: Atul Gaikwad and Rishi Suri
  * Program: usage of assert macro before derefrencing any pointer
*/
#include<stdio.h>
#include <assert.h>
int main(){
	int a=0;
	
	int *ptr=&a;
	
	assert(*ptr); // expression evaluates to false (0) and calls abort to stop program execution.
	printf("a=%d",*ptr);

	
	return 0;
}
