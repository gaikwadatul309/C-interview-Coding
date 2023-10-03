/***********************************************************************************************
*Assignment: 4                                      Date: 21/04/2023
*Program statement:Q9. c program to find power of n by iteration
*
***********************************************************************************************/
#include<stdio.h>
int Pow(int,int);
int main(){
    int n, p;
    printf("Enter the base and then power: ");
    scanf("%d%d",&n,&p);
    printf("%d^%d = %d",n,p,Pow(n,p));
    return 0;
}

int Pow(int a, int b){
    int res=a;
    while (--b)
        res*=a;
    return res;
}



