/*
	Title: To pass array of stucture to the function
	Author: Gaikwad Atul J.
	Date:   29/08/2016
*/
typedef struct Student
{
	int iRoll;
	char cName[15];
	float fAvg;
}STUD;
#include<stdio.h>
void Display(STUD);
void main()
{
	float fA;
	int i;
	STUD S1[3];
	clrscr();
	printf("\nEnter the Record\n");
	for(i=0;i<3;i++)
	{
		scanf("%d",S1[3].iRoll);
		flushall();
		gets(S1[3].cName);
		scanf("%f",&fA);
		S1[i].fAvg=fA;
	}
	Display(S1[i]);
	getch();
}
void Display(STUD S)
{
	printf("\nDisplay the record of 3 students");
	printf("%d",S.iRoll);
	puts(S.cName);
	printf("%f\n",S.fAvg);
	getch();
}