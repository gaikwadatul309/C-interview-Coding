
//C Program to swap two numbers without using third variable.

#include<stdio.h>
int main()
{
	int n1,n2;
	
	printf("Before swaping the numbers are:\n");
	printf("Enter First Number=");
	scanf("%d", &n1);

	printf("Enter second Number=");
	scanf("%d", &n2);

	n1=n1+n2;
	n2=n1-n2;
	n1=n1-n2;

	printf("After swaping the numbers are:\n");
	printf("The first number=%d\n", n1);

	printf("The second  number=%d\n", n2);
	return 0;
}
