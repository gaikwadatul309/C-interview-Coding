/*
	Title: To understand the pointer
	Author: Gaikwad Atul J.
	Date: 28/07/2016
*/
#include<stdio.h>
void main()
{
	int iNum=10;
	int* iptr;
	iptr=&iNum;
	clrscr();
	printf("\n%d",iNum);
	printf("\n%d",&iNum);
	printf("\n%d",iptr);
	printf("\n%d",&iptr);
	printf("\n%d",*iptr);
	printf("\n%d",iptr++);
	printf("\n%d",iptr);
	printf("\n%d",iptr+2);
	printf("\n%d",iptr-3);
	getch();
}


