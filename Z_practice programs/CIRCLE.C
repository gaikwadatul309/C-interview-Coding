/*
	Title: To Display Area and Perimeter of the circle.
	Author: Gaikwad Atul J.
	Date: 28/07/2016
*/
#include<stdio.h>
#define pi 3.14
void AreaPeri(float *,float *);
void main()
{
	float fRadi,fArea,fPeri;
	clrscr();
	printf("\nEnter the radius\n");
	scanf("%f",&fRadi);
	AreaPeri(&fArea,&fPeri);
	printf("\n Perimeter of Circle=%f",fPeri);
	printf("\n Area of Circle=%f",fArea);
	getch();
}
void AreaPeri(float*iptr1,float*iptr2)
{
	float fRadi;
   *iptr1=fRadi*fRadi*pi;
   *iptr2=2*pi*fRadi;

}