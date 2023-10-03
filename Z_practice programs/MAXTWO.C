/*
	Title:  To write MaxTwo user defined function.
	Author:Gaikwad Atul J.
	Date:   26/07/2016
*/
#include<stdio.h>
int MaxTwo(int iN1,int iN2);
void main()
{
	int iN1,iN2,iMax;
	clrscr();
	printf("\nEnter Two Nos.\n");
	scanf("%d%d",&iN1,&iN2);
	iMax=MaxTwo(iN1,iN2);
	printf("\nMaximum=%d",iMax);
	getch();
}
int MaxTwo(int iNum1,int iNum2)
{
	if(iNum1>iNum2)
	{
		return iNum1;
	}
	else
	{
		return iNum2;
	}

}