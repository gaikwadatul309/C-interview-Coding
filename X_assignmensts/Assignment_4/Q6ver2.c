/******************************************************************************
*Author: Atul Gaikwad                               Date: 21/04/2023
*Assignment: 4
*Program statement:Q6. c program to print fibonacci series by recursion
*
*******************************************************************************/
#include<stdio.h>
void fibonacci(int,int,int);        //function declaration
int main()
{
    int prev=0,curr=1,next=prev+curr;
    int num;
	printf("Enter any number: ");
	scanf("%d",&num);
    printf("%d %d %d",prev,curr,next);
    
    fibonacci(curr,next,num-3);         //function call
    return 0;
}


void fibonacci(int p, int c, int n){
    
    if(n>0){
        int next=p+c;
        printf("%d",next);
        fibonacci(c,next,--n);          //recursive function call
    }
}

