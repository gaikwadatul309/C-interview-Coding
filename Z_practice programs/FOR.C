/*
	Title:Display first five numbers using for loop
	Author:Gaikwad Atul J.
	Date:19/07/2016
*/
#include<stdio.h>
void main()
{
	int iNum=1;
	clrscr();
	printf("\nDisplay First Five Numbers 1-5\n");
	for(iNum=1;iNum<=5;iNum++)
	{
		printf("\n%d",iNum);
	}

	getch();
}