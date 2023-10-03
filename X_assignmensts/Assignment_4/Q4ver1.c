/******************************************************************************
*Author: Atul Gaikwad                              
*Assignment: 4                       Date: 20/04/2023
*Program statement:Q4. c program to find factorial of n number by iteration
*
*******************************************************************************/
#include <stdio.h>
int factbyiteration(int);

int main()
{
    int num,fact2;
    printf("Enter a number: ");
    scanf("%d", &num);
    fact2=factbyiteration(num);
    printf("Factorial by iteration of %d is:%d\n",num,fact2);

    return 0;
}

int factbyiteration(int num){
    int recur=1;
    for(int i=2;i<=num;i++){
        recur *=i;
    }
    return recur;
}

