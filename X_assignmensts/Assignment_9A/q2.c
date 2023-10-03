/******************************************************************************
 * Author: Atul Gaikwad and Rishi Suri
 * Assigment : 9A                                * Date: 22/04/2023
 * Program statement: Q2. c program area of rectangle using structure
*******************************************************************************/
#include<stdio.h>
struct area{
	int l;
	int b;
	int a;
}a;
int main ()
{
        int s1,s2;
	printf("enter lenght and breadth of your triangle\n");
	scanf("%d%d",&s1,&s2);
	a.l=s1;
	a.b=s2;
	printf("area=%d",a.l*a.b);
	return 0;
}
