/******************************************************************************
 * Author: Atul Gaikwad and Rishi Suri
 * Assigment : 7                        * Date: 22/04/2023
 * Program statement: Q2. c program to print the address of register variable
*******************************************************************************/
#include<stdio.h>
register int i=10;
int main()
{
 register int j=10;
 int *a1,*a2;
 a1=(int *)&i;   // we cant get the add of reister variable as it not stored in the memory
 a2=(int *)&j; //
 printf("a1=%p\n",a1);//error
 printf("a2=%p\n",a2);
 return 0;
}