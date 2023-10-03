/******************************************************************************
*Author: Atul Gaikwad                              
*Assignment: 4                                      Date: 21/04/2023
*Program statement:Q5. c program to find GCD of n numbers by iteration
*
*******************************************************************************/

#include <stdio.h>
int gcd(int,int);       //function declaration

int main()
{
    int num,gcd1, arr[50];
    printf("Enter number of elements: ");
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        printf("arr[%d]=", i);
        scanf("%d", &arr[i]);
    }
    gcd1=arr[0];    //initialise gcd with first element of array
    
    for(int j=1;j<num;j++){
        gcd1=gcd(arr[j],gcd1);  //function call
    }
    printf("GCD=%d",gcd1);
    return 0;
}

int gcd(int a, int b){              //function defination
    int gcd1; 
    for(int i=1;i<=a && i<=b;++i){     //iterative function call for gcd
        if(a%i==0 &&b%i==0){
            gcd1=i;
        }
    }   return gcd1;      
}





