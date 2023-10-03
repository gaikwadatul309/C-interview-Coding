/*
	Title:Input output operation on character
	Author:Gaikwad Atul J.
	Date:12/07/2016

*/
#include<stdio.h>                 //inclusion of header file
void main()                       //starting point of program
{
	char c;
	clrscr();
	printf("\nEnter any character :");
	flushall();
	scanf("%c",&c);
	printf("The character is %c",c);

	getch();
}