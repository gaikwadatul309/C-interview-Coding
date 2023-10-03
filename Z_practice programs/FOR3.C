/*
	Title:Display the odd no between 1 to 10 using fo loop
	Author:Gaikwad Atul J.
	Date:19/07/2016
*/
#include<stdio.h>					//inclusion of header file
void main()
{
	int iNum=1;
	clrscr();
	printf("\nDisplay odd numbers between 1 and 10\n");
	for(iNum=1;iNum<=10;iNum++)
	{
		if(iNum%2==1)
		{
			printf("%d\n",iNum);
		}
	}
	getch();
}
