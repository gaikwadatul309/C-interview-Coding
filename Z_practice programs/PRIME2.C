/*
	Title:  To display first 15 prime nos.
	Author: Gaikwad Atul J.
	Date:   21/07/2016
*/
#include<stdio.h>
void main()
{
	int iNum= 2,iCnt=0,i;
	clrscr();
	printf("\nDisplay First 15 Prime Nos.\t\n");
	printf("%d\t",iNum);
	iNum++;
	while(iCnt<14)
	{
		for(i=2;i<iNum;i++)
		{
			if(iNum%i==0)
			{
				iNum++;
				break;
			}
		}
		if(iNum==i)
		{
			printf("\t%d",iNum);
			iCnt++;
			iNum++;
		}
	}
	getch();
}