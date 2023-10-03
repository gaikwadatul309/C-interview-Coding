/******************************************************************************
*Author: Atul Gaikwad                               
*Assignment: 4                                  Date: 20/04/2023
*Program statement:Q4. c program to find factorial of n number by recursion
*
*******************************************************************************/
#include <stdio.h>
int factbyrecursion(int);

int main()
{
    int num, fact1;
    printf("Enter a number: ");
    scanf("%d", &num);
    fact1=factbyrecursion(num);
    printf("Factorial by recursion of %d is:%d\n",num,fact1);
    return 0;
}

int factbyrecursion(int num){
    if(num==0){
        return 1;
    }
    else{
    return num*factbyrecursion(num-1);
    }
}




