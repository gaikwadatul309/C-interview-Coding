/***********************************************************************************************
*Assignment: 4                                      Date: 21/04/2023
*Program statement:Q8. c program to count number of 1s & no of 0s in binary number by recursion
*
***********************************************************************************************/
#include<stdio.h>
int findOnes(int);      //functions declarations
int findZeros(int);
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("number of ones in this number is %d\n",findOnes(n));        //function call
    printf("number of zeros in the number is %d\n",findZeros(n));       //function call
    return 0;
}

int findOnes(int a){
    int ones=0;
    if(a!=0){
        if(a&1)
            ones=1;
        ones+=findOnes(a>>1);           //recursive function call
    }
    return ones;
}

int findZeros(int a){
    int zeros=0;
    if(a!=0){
        if(!(a&1))
            zeros++;
        zeros+=findZeros(a>>1);         //recursive function call
    }
    return zeros;  
}

