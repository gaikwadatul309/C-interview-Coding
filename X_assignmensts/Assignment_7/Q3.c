/******************************************************************************
 * Author: Atul Gaikwad and Rishi Suri
 * Assigment : 7                                 * Date: 22/04/2023
 * Program statement: Q3. c program to print the address of register variable
*******************************************************************************/
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<ctype.h>

char upper(char);
int main(){
     int num;
     double res;
     char ch,out;
     printf("enter any lower case alphabet:\n");
     scanf("%c",&ch);
     printf("enter any number\n");
     scanf("%d",&num);
    
     res=sqrt(pow(2,abs(num)));  // first it will take power of 2 numbers 
                                 // &then find the square root of that power
     printf("res=%0.2f\n",res);
     
     out=upper(ch);			//function call for uppercase 
     printf("out =%c",out);
     return 0;
}
char upper(char c){
     char out;
     out=putchar(toupper(c));
     return out;
}