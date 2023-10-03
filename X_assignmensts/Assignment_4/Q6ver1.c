/******************************************************************************
*Author: Atul Gaikwad                               Date: 21/04/2023
*Assignment: 4
*Program statement:Q6. c program to find fibonacci series of n number by iteration
*
*******************************************************************************/
#include <stdio.h>
int fibo(int num);              //function declaration

int main(){
	int num;
	printf("Enter any number: ");
	scanf("%d",&num);
	fibo(num);    //function call with no return
	return 0;
}

int fibo(int num){
    int a=0,b=1,sum;
    printf("%d\t%d\t",a,b);
	for(int i=2;i<num;i++){     //iterative approach to print fibonacci serie
        sum=a+b;
	    a=b;
 	    b=sum;
	    printf("%d\t",sum);
	}
    return 0;
}
