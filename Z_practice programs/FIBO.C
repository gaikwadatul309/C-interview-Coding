/*
	Title:  To Display Fibonacci Series
	Author: Gaikwad Atul J.
	Date:   21/07/2016
*/
#include<stdio.h>
void main()
{
	int iTerm1=0,iTerm2=1,iSum;
	int iTerm,iCnt=1;
	clrscr();
	printf("\nEnter the term of Fibo\n");
	scanf("%d",&iTerm);
	printf("%d\t%d",iTerm1,iTerm2);
	while(iCnt<=iTerm-2)
	{
		iSum=iTerm1+iTerm2;
		printf("\t%d",iSum);
		iTerm1=iTerm2;
		iTerm2=iSum;
		iCnt++;
	}
	getch();

}