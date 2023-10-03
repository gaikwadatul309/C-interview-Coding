/*
 * Authour:  Rishi suri & Atul Gaikward
 * Program: Conversion of integer form little to big endian
*/
#include<stdio.h>
int main()
{
int x=0x10203040,temp,temp2;                   //initializing with hex value as 2 hex digits are stored in one byte so swapping becomes easier
char *p;                                       //using char pointer as it can dereference one byte
p=(char *)&x;                                  //typecasting x to char* type as x is short int variable
printf("The no in Little Endian format is %x%x%x%x\n",*p,*(p+1),*(p+2),*(p+3));
temp=*p;                                       //using temp variable to swap the value of one byte with another
*p=*(p+3);
temp2=*(p+1);
*(p+1)=*(p+2);
*(p+2)=temp2;
*(p+3)=temp;
printf("The no in Big Endian format is %x%x%x%x\n",*p,*(p+1),*(p+2),*(p+3));
return 0;
}
