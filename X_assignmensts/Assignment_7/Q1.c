/******************************************************************************
 * Author: Atul Gaikwad and Rishi Suri
 * Assigment : 7                        * Date: 22/04/2023
 * Program statement: Q1. c program to count function call using static variable
*******************************************************************************/
#include<stdio.h>
int sqr(int);
int main (){
	int i=1,num, out;
	printf("Enter a number upto which you want to print square: ");
	scanf("%d", &num);
	for(i=1;i<=num;i++){
	     out=sqr(i);
	}
     printf("\nFunction is called %d times",out);

	return 0;
}
int sqr(int n){
     int square=0;
     int static count=0;  //  variable declared static
     square=n*n;
     printf("Square(%d): %d\n",n, square);
     count++;
     
     return count;   // pass incremented value in terms of static
}