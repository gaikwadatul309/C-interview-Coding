/*
	Title: Check max of 2 no using if and else
	Author:Gaikwad Atul J.
	Date: 12/07/2016
*/
#include<stdio.h>
void main()
{
	int iN1, iN2;
	clrscr();
	printf("Enter Two No :\n");
	scanf("%d%d",&iN1,&iN2);
	if(iN1>iN2)
	{
		printf("\niN1 is max\n");
	}
	else
	{
		printf("\niN2 is max\n");
	}
	getch();

}