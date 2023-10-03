/******************************************************************************
*Assignment: 4                  Date: 20/04/2023
*Program statement:Q3. c program to find sum of n number by recursion
*
*******************************************************************************/
#include <stdio.h>
int sumbyrecursion(int);

int main()
{
    int num, sum1;
    printf("Enter a number: ");
    scanf("%d", &num);
    sum1=sumbyrecursion(num);
    printf("Sum by recursion of %d is: %d\n",num,sum1);
    return 0;
}

int sumbyrecursion(int num){
    if(num==0){
        return 0;
    }
    else{
    return (num+=sumbyrecursion(num-1));        //recursive function call
    }
}

