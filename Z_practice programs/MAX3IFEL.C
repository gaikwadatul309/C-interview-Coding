/*
	Title:To check max of 3 no using if else
	Author:Gaikwad Atul J.
	Date:19/07/2016
*/
#include<stdio.h>
void main()
{
	int iN1,iN2,iN3;
	clrscr();
	printf("\nEnter Three Nos\n");
	scanf("%d%d%d",&iN1,&iN2,&iN3);
	if(iN1>iN2&&iN1>iN3)
	{
		printf("\niN1 is greater");
	}
	else
	{
		if(iN2>iN3)
		{
			printf("\niN2 is greater");
		}
		else
		{
			printf("\niN3 is greater");
		}
	}
	getch();
}