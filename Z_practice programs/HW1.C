/*
	Title: To pass array of sturcture to the function
	Author: Gaikwad Atul J.
	Date: 29/08/2016
*/
typedef struct Student
{
	int iRoll;
	char cName[10];
	float fAvg;
}STUD;
#include<stdio.h>
void main()
{
	float fA;
	int i;
	STUD S1[3];
	STUD* sPtr;
	sPtr=S1;
	clrscr();
	printf("\nEnter the Record of 3 Student\n");
	for(i=0;i<3;i++)
	{
		scanf("%d",(sPtr+i)->iRoll);
		flushall();
		gets((sPtr+i)->cName);
		scanf("%f",&fA);
		(sPtr+i)->fAvg=fA;
	}
	printf("\nDisplay the record of 3 student\n");
	for(i=0;i<3;i++)
	{
		printf("%d\n",(sPtr+i)->iRoll);
		puts((sPtr+i)->cName);
		printf("%f\n",(sPtr+i)->fAvg);
	}
	getch();
}
