/******************************************************************************
*Author: Atul Gaikwad                               Date: 21/04/2023
*Assignment: 4
*Program statement:Q7. c program to convert a decimal to binary,octal,hexa by recursion
*
*******************************************************************************/

#include<stdio.h>
void convert(int, int);		//function declaration

int main()
{
        int num;
        printf("Enter a positive decimal number : ");
        scanf("%d", &num);
        printf("\nThe Binary number is :: ");
        convert(num, 2);				//function call for binary conversion
        printf("\n");
        printf("\nThe Octal number is :: ");
        convert(num, 8);				//function call for octal conversion
        printf("\n");
        printf("\nThe Hexadecimal number is :: ");
        convert(num, 16);				//function call for hexadecimal conversion
        printf("\n");

        return 0;
}

void convert (int num, int base)
{
        int rem = num%base;					//getting reminder

        if(num==0)
                return;
        convert(num/base, base);			//value of num is modified here

        if(rem < 10)
                printf("%d", rem);
        else
                printf("%c", rem-10+'A' );		//for hexadecimal number 
}

