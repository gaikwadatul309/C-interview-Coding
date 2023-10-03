/*
	Title: To pass entire array to the function
	Author: Gaikwad AtulJ.
.
	Date: 09/06/2016
*/
#define SIZE 5
#include<stdio.h>
void Addition(int iMarks[]);
void main()
{
	int iM[SIZE ],i;
	clrscr();
	printf("\nEnter the element of Array\n");
	for(i=0;i<SIZE;i++)
	{
		scanf("%d",&iM[i]);
	}
	Addition(iM);
	printf("\nDisplay the element of Array\n");
	for(i=0;i<SIZE;i++)
	{
		printf("%d\t",iM[i]);
	}
	getch();
}
void Addition(int iMarks[])
{
	int j;
	for(j=0;j<SIZE;j++)
	{
		iMarks[j]=iMarks[j]+5;
	}
}
