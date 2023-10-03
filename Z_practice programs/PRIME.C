/*
	Title:To check enter no is prime or not
	Author:Gaikwad Atul J.
	Date:21/07/2016
*/
#include<stdio.h>
void main()
{
	int iNum,iCnt=2;
	clrscr();
	printf("\nEnter the Number\n");
	scanf("%d",&iNum);
	while(iCnt<iNum)
	{
		if(iNum%iCnt==0)
		{
			printf("\nNo is not prime");
			break;
		}
		iCnt++;
	}
	if(iNum==iCnt)
	{
		printf("\nNo is prime");
	}
	getch();
}