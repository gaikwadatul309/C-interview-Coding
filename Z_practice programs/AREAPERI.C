/*
	Title:To display Area and Perimeter of Circle
	Author: Gaikwad Atul J.
	Date:   02/08/2016
*/
#include<stdio.h>
void Areaperi(int,float*,float*);
void main()
{
	int iRad;
	float fArea,fPeri;
	clrscr();
	printf("\nEnter the Radius\n");
	scanf("%d",&iRad);
	Areaperi(iRad,&fArea,&fPeri);
	printf("\nArea of circle=%f",fArea);
	printf("\nPerimeter of circle=%f",fPeri);
	getch();
}
void Areaperi(int iR,float*fA,float*fP)
{
	*fA=3.14*iR*iR;
	*fP=2*3.14*iR;
}
