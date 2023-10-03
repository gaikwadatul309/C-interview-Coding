/*
	Title:To
	Author:Gaikwad Atul J.
	Date:19/07/2016
*/
#include<stdio.h>
void main()
{
	int iNum=1;
	clrscr();
	printf("\nDisplay the even numbers 1-15\n");
	for(iNum=1;iNum<=15;iNum++)
	{
		if(iNum%2==0)
		{
			printf("%d\n",iNum);
		}
	}

	getch();
}
