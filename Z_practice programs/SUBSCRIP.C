/*
	Title : To pass array to function by subscript method.
	Author :Gaikwad Atul J.
	Date : 30/08/2016
*/
typedef struct Student
{
	int iRoll;
	char cName[15];
	float favg;
}STUD;
#include<stdio.h>
void Accept(STUD[]);
void main()
{
	float fA;
	STUD S1[3];
	int i;
	clrscr();
	Accept(S1);
	printf("\nDisplay the record of three Students\n");
	for(i=0;i<3;i++)
	{
		printf("\n%d\n",S1[i].iRoll);
		flushall();
		puts(S1[i].cName);
		printf("\n%f\n",S1[i].favg);
	}
	getch();
}
void Accept(STUD S[])
{
	int j;
	float FA;
	printf("\nInput the record of three student\n");
	for(j=0;j<3;j++)
	{
		scanf("%d",&S[j].iRoll);
		flushall();
		gets(S[j].cName);
		scanf("%f",&FA);
		S[j].favg=FA;
	}
}