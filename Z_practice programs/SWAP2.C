/*
	Title: To display Swap No in calling function
	Author: Gaikwad Atul J.
	Date: 28/07/2016
*/
#include<stdio.h>
void Swap(int *,int *);
void main()
{
	int iNum1,iNum2;
	clrscr();
	printf("\nEnter Two Numbers\n");
	scanf("%d%d",&iNum1,&iNum2);
	printf("\nDisplay the Nos.before Swap");
	printf("\n%d\t%d\n",iNum1,iNum2);
	Swap(&iNum1,&iNum2);
	printf("\nDisplay the Nos.after Swap\n");
	printf("\n%d\t%d",iNum1,iNum2);
f	getch();
}
void Swap(int*iptr1,int*iptr2)
{
	int iTemp;
	iTemp=*iptr1;
	*iptr1=*iptr2;
	*iptr2=iTemp;
}