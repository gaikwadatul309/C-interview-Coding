/*
	Title: To Perform Input Output operation on integer array.
	Author: Gaikwad Atul J.
	Date:   09/08/2016
*/
#define SIZE 5
#include<stdio.h>
void main()
{
	int iMarks[SIZE];
	int i;
	clrscr();
	printf("\nEnter the elements of Array\n");
	for(i=0;i<SIZE;i++)
	{
		scanf("%d",&iMarks[i]);
	}
	printf("\nDisplay the elements of Array\n");
	for(i=0;i<SIZE;i++)
	{
		printf("\n%d\t",iMarks[i]);
	}
	getch();

}