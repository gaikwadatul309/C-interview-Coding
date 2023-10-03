/*
	Title: Maximum of 2 no using if and exit(0)
	Author: Gaikwad Atul J.
	Date: 12/07/2016

*/
#include<stdio.h>
void main()
{
	int iNum1,iNum2;
	clrscr();
	printf("enter two no :\n");
	scanf("%d%d",&iNum1,&iNum2);
	if(iNum1<iNum2)
	{
		printf("\niN2 is max\n");
		getch();
		exit(0);
	}
	printf("\niNum1 is max\n");
	getch();


}
