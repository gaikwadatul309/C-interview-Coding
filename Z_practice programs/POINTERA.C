/*
	Title:
	Author:Gaikwad Atul J.
	Date:
*/
typedef struct Student
{
	int iRoll;
	char cName[15];
	float fAvg;
}STUD;
#include<stdio.h>
void Accept(STUD*);
void main()
{
	float fA;
	STUD S1[3];
	int i;
	clrscr();
	Accept(S1);
	printf("\nDisplay the record of two students\n");
	for(i=0;i<3;i++)
	{
		printf("\nDisplay the record of two Students\n");
		for(i=0;i<3;i++)
		{
			printf("\n%d\n",S1[i].iRoll);
			puts(S1[i].cName);
			printf("\n%f\n",S1[i].fAvg);
		}
		getch();
	}
}
void Accept(STUD* Sptr)
{
	int j;
	float FA;
	printf("\nInput the record of two student\n");
	for(j=0;j<3;j++)
	{
		scanf("%d",&(Sptr+j)->iRoll);
		flushall();
		gets((Sptr+j)->cName);
		scanf("%f",&FA);
		(Sptr+j)->fAvg=FA;
	}
}

