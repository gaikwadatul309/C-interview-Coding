/*
	Title:
	Author:Gaikwad Atul J.
	Date:19/07/2016
*/
#include<stdio.h>					//inclusion of header file
void main()                         //starting point of the program
{
	int iN1,iN2,iSum,iSub,iMul,iChoice;
	float fDiv;
	clrscr();
	printf("\n-------Menu-------\n");
	printf("\n1.Addition of 2 Nos.");
	printf("\n2.Substraction of 2 Nos.");
	printf("\n3.Multiplication of 2 Nos.");
	printf("\n4.Division of 2 Nos.");
	printf("\n5.Invalid choice");
	printf("\nEnter two integers\n");
	scanf("%d%d",&iN1,&iN2);
	printf("\nEnter the choice");
	scanf("%d",&iChoice);
	switch(iChoice)
	{
		case 1:
			iSum=iN1+iN2;
			printf("\nAddition=%d",iSum);
			break;
		case 2:
			iSub=iN1-iN2;
			printf("\nSubstraction=%d",iSub);
			break;
		case 3:
			iMul=iN1*iN2;
			printf("\nMultiplication=%d",iMul);
			break;
		case 4:
			fDiv=iN1/iN2;
			printf("\nDivision=%f",fDiv);
			break;
		default:
			printf("\nInvalid Choice");
	}
	getch();

}