/******************************************************************************
 * Author: Atul Gaikwad and Rishi Suri
 * Assigment : 7                                 * Date: 22/04/2023
 * Program statement: Q6. c program to check and fix the error of input given 
*******************************************************************************/
#include<stdio.h>
int *p;
int *test (int x); // test is a function returns pointer
int main()
{
 int x ,s;
 printf("enter any number ");
 scanf("%d",&x);
 s=*test(x);
 printf("x=%d\n",x);
 printf("s=%d\n",s);
 printf("p=%d\n",*p);
 return 0;
}

int *test (int x){
     int y=x * x;
	//return &y;       // function  returns the address  of local variable
	p=(int *)&y;   //  p is global variable keep  the value same throught the program 
	return p;
}
