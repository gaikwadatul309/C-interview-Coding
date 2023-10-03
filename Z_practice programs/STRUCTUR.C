/*
	Title: To Perform Input and output operation on a structure
	Author: Gaikwad Atul J.
	Date: 29/08/2016
*/
struct Student
{
	int iRoll;
	char cName[15];
	float fAvg;
}STUD;
#include<stdio.h>
void main()
{
	float fA;
	struct Student *sPtr;
	sPtr=&STUD;
	clrscr();
	printf("\nEnter the record of student");
	scanf("%d",&STUD.iRoll);
	flushall();
	gets(STUD.cName);
	scanf("%d",&fA);
	STUD.fAvg=fA;
	printf("\nDisplay the record of student\n");
	printf("%d",sPtr->iRoll);
	puts(sPtr->cName);
	printf("%f",sPtr->fAvg);
	getch();
}