/*
	Title: To pass array to the function element by element
	Author: Gaikwad Atul J.
	Date: 09/08/2016
*/
#define SIZE 5
#include<stdio.h>
void Multiply(int);
void main()
{
	int iM[SIZE],i;
	clrscr();
	printf("\nEnter the element of Array\n");
	for(i=0;i<SIZE;i++)
	{
		scanf("%d",&iM[i]);
	}
	printf("\nDisplay the element of Array\n");
	for(i=0;i<SIZE;i++)
	{
		Multiply(iM[i]);
	}
	getch();
}
void Multiply(int iR)
{
	iR=iR*2;
	printf("%d\t",iR);
}