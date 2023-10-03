/*
	Title: Sum of ten numbers.
	Author: Gaikwad Atul J.
	Date: 12/07/2016
*/
#include<stdio.h>					   //inclusion of header file
void main()                            //starting point of program
{
	int iN1,iN2,iN3,iN4,iN5,iN6,iN7,iN8,iN9,iN10,iSum;
	clrscr();
	printf("\nEnter ten no.:\n");
	scanf("%d%d%d%d%d%d%d%d%d%d",&iN1,&iN2,&iN3,&iN4,&iN5,&iN6,&iN7,&iN8,&iN9,&iN10);
	iSum=iN1+iN2+iN3+iN4+iN5+iN6+iN7+iN8+iN9+iN10;
	printf("\nAddtion of ten no :%d",iSum);
	getch();



}
