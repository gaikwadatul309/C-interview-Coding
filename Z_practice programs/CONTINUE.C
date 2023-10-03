/*
	Title: To study the continue statement
	Author: Gaikwad Atul J.
	Date:02/08/2016
*/
#include<stdio.h>
void main()
{
	int i;
	clrscr();
	for(i=0;i<5;i++)
	{
		if(i==2)
		{
			continue;
		}
		printf("\n %d",i*2);
	}
	getch();
}