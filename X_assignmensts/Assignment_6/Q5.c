/*
 * Authour: Rishi suri & Atul gaikward
 * Program: Convert from one type of pointer  address to other using *void
*/

#include<stdio.h>
int main(){
	int a=5;
	void *p=&a;
	
	printf("*p = %d\n",*(int *)p);
	
	return 0;
}
