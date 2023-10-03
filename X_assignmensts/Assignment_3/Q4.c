/*
 * Authour: Rishi Suri and Atul Gaikward
 * Program: finding a number biggest of 3 numbers using conditional operator
*/


#include<stdio.h>
int main()
{
	int n1,n2,n3, biggest;
	
	printf("Please enter three numbers:\n");
	scanf("%d %d %d",&n1,&n2,&n3);
	biggest=(n1>n2)?(n1>n3?n1:n3):(n2>n3?n2:n3);  // conditional operator to check the biggest number by comparison
	printf("The biggest number is : %d\n",biggest);
}
