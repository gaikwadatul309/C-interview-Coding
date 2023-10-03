/******************************************************************************
 * Author: Atul Gaikwad and Rishi Suri
 * Assigment : 9A                                * Date: 22/04/2023
 * Program statement: Q1. c program additon of two numbers using structure
*******************************************************************************/
#include<stdio.h>
struct additon{
     int num1;
     int num2;
     int sum;
};

int main(){
     struct additon add;
     printf("Enter any two numbers: \n");
     scanf("%d%d", &add.num1, &add.num2);
     add.sum=add.num1+add.num2;
     printf("THe additon of %d and %d is : %d", add.num1, add.num2, add.sum);
     return 0;
}