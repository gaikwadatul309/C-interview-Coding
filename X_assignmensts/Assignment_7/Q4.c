/******************************************************************************
 * Author: Atul Gaikwad and Rishi Suri
 * Assigment : 7                                 * Date: 22/04/2023
 * Program statement: Q4. c program to swap a number by call by value and call by reference
*******************************************************************************/
#include<stdio.h>
int swap(int a, int b);  // function declarations
int pswap(int *a, int *b);
int main ()
{
	int a,b;
	printf("Enter any two number:\n");
	scanf("%d \t %d",&a,&b);
	printf("The numbers before swap: a=%d \t b=%d\n",a,b); 
	
	swap(a,b);                   // call by value
	/* value will remain same as input as we passed only values */
	printf("\n a=%d \t b=%d\n",a,b); 
	
	pswap(&a,&b); // call by reference
	printf("a=%d\tb=%d\n",a,b); // swap done at address level so the changes reflect in main also
	return 0;
}

int swap(int a,int b)
{
     printf("call by value\n");
	int temp;           

	temp=a;  //it created variable copies and swap no changes in main fun variable 
	a=b;
	b=temp;
	printf("a=%d\tb=%d\n",a,b);  //  swap will done  here not in main function
}

int pswap(int *a,int *b)
{  
	printf("call by refernce \n");
	int p;               // changes to be done by address level
	 p=*a;
	*a=*b;
	*b=p;
}
