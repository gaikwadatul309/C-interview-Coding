/*
 * Authour: Rishi suri & Atul Gaikward
 * Program: To check Endianess (little or big) of current system
*/

#include<stdio.h>
int main()
{
	int x=0x43487653;         //initializing with hex value as 2 hex digits are stored in one byte so checking endianness of our system becomes easier
	char *cp;                 //using char pointer as it can dereference one byte
	cp=(char*)&x;             //typecasting x to char* type as x is int variable
        printf("The first byte in integer is %x\n",*cp);          //dereferencing each byte in our integer to check which 2 hex digits are stored in which byte
      	printf("The second byte in integer is %x\n",*(cp+1));
        printf("The third byte in integer is %x\n",*(cp+2));
  	printf("The fourth byte in integer is %x\n",*(cp+3));
	if(*cp=53)                                                //if last two hex digits are stored in first byte then our system is little endian
	printf("The System is Little Endian\n");
	else
	printf("The System is Big Endian\n");                     //if first two hex digits are stored in first byte then our system is big endian

        return 0;

}
