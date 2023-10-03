

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
	int i;
	float fA;
	STUD S1[3];
	clrscr();
	printf("\nEnter the Record of Three Student");
	for(i=0;i<3;i++)
	{
		scanf("%d",&S1[i].iRoll);
		flushall();
		gets(S1[i].cName);
		scanf("%f",&fA);
		S1[i].fAvg=fA;
	}
	for(i=0;i<3;i++)
	{
		Display(S1[i]);
	}
	getch();
}
void Display(STUD S)
{
	printf("\nDisplay the Record\n");
	printf("\n%d\n",S.iRoll);
	flushall();
	puts(S.cName);
	printf("%f",S.fAvg);
}
