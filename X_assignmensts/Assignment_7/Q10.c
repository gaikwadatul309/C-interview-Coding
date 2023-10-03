/******************************************************************************
 * Author: Atul Gaikwad and Rishi Suri
 * Assigment : 7                                 * Date: 22/04/2023
 * Program statement: Q110. c program -Write a simple program to test function pointer
									- typedef for function pointer
*******************************************************************************/
#include<stdio.h>
int sum (int,int );
int main()
{
// program to test  function ptr 

	int (*fp)(int,int); // fp is function ptr which takes 2 int parameter returns int
fp=&sum; // intialize fun ptr to addr of sum
int res;
res=(*fp)(10,20);  // fun call
printf("res=%d\n",res);
return 0;
}
int sum (int n,int m)   // function takes 10 and 20 as parameter 
{
	int s=0;
	s=n+m;
       return s;  //returns s i.e addition of two number
}

