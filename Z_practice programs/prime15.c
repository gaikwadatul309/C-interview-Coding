/*
	Title:  To display first 15 prime nos.
	Author: Gaikwad Atul J.
	Date:   21/07/2016
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int iNum=2,iCnt=0,i;

	printf("\nDisplay First 15 Prime Nos.");
	iNum++;
	while(iCnt<14)
	{
		for(i=2; i <= iNum;i++)
		{
			if(iNum%i==0)
			{
				iNum++;
				break;
			}
		}
		if(iNum==1)
		{
			printf("\t%d",iNum);
			iCnt++;
			iNum++;
		}
	}
	return 0;
}
