/******************************************************************************
*Assignment: 4                          Date: 20/04/2023
*Program statement:Q3. c program to find sum of n number by iteration
*
*******************************************************************************/
#include <stdio.h>
int sumbyiteration(int);

int main()
{
    int num, sum1;
    printf("Enter a number: ");
    scanf("%d", &num);
    sum1=sumbyiteration(num);
    printf("Sum by iteration of %d is: %d\n",num,sum1);
    return 0;
}

int sumbyiteration(int num){
    int sum=0;
    for(int i=0;i<=num;i++){
        sum+=i;
    }
    return sum;
}



