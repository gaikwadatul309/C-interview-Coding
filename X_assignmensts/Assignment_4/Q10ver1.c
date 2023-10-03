/***********************************************************************************************
*Assignment: 4                                      Date: 21/04/2023
*Program statement:Q9. c program to count digits of a number by iteration
*
***********************************************************************************************/
#include<stdio.h>
int digits(int);
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("digits in %d is %d",n,digits(n));
    return 0;
}

int digits(int a){
    int res=0;
    while (a){
        res++;
        a/=10;
    }
return res;
}

