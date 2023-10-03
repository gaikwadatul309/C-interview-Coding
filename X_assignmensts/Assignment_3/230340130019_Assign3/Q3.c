/*
 * Author: Rishi Suri and Atul Gaikwad
 * Program: Program to check increment and decrement operator
*/
 
#include<stdio.h>
int main(){
	int k,x,p;
	printf("enter the value of k: \n");
	scanf("%d",&k);
	printf("enter the value of x: \n");
	scanf("%d",&x);
	printf("enter the value of p: \n");
	scanf("%d",&p);
	printf("y=%d\n",x++*10);   // the original value of the x get multiplied by 10 then x get incremented
	printf("y=%d\n",x); 		// the new value of the x
	printf("y=%d\n",++x*10);   // fi
	printf("%d\n",--p/3);
	printf("%d\n",p--/3);
	printf("%d\n",k++);
	printf("%d\n",++k);
	return 0;
}
