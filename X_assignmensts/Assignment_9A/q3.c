
/******************************************************************************
 * Author: Atul Gaikwad and Rishi Suri
 * Assigment : 9A                                * Date: 22/04/2023
 * Program statement: Q3. c program area of 3 rectangles using loop
*******************************************************************************/
#include<stdio.h>
struct area{
	int l;
	int b;
	int a;
}ar[3];
int main()
{
	printf("enter value of length and breadth of 3 triangle\n");
 for(int i=0;i<3;i++)
 {
	 scanf("%d %d",&ar[i].l,&ar[i].b);
	 ar[i].a= ar[i].l * ar[i].b;
	 printf(" the area of triangle is %d\n",ar[i].a);
	 
 }
//1st array of structure without a loop
	/*printf("enter the length and breadth 3 triangle\n");
	scanf("%d%d%d%d%d%d",&ar[0].l,&ar[0].b,&ar[1].l,&ar[1].b,&ar[2].l,&ar[2].b);
  
	ar[0].a= ar[0].l * ar[0].b;

	ar[1].a= ar[1].l * ar[1].b;

	ar[2].a= ar[2].l * ar[2].b;

	printf("the area of 1st triangle %d\n",ar[0].a);
	printf("the area of 2nd triangle %d\n",ar[1].a);
	printf("the area of 3rd triangle %d\n",ar[2].a);*/
	return 0;
}

// 2st structure of array
/*struct area{
	int arr[2];
	int arr1[2];
	int ar[2];
	float arr2[3];
}a;
int main()
{

	printf("enter the length and breadth of 3 triangle\n");
	for(int i=0;i<2;i++)  // first loop to take
	scanf("%d ",&a.arr[i]);
        for(int i=0;i<2;i++)
	scanf("%d",&a.arr1[i]);
        for(int i=0;i<2;i++)
	scanf("%d",&a.ar[i]);
	a.arr2[0]=a.arr[0]*a.arr[1];
	a.arr2[1]=a.arr1[0]*a.arr1[1];
	a.arr2[2]=a.ar[0]*a.ar[1];
        for(int i=0;i<3;i++)
	printf("area of tri %f\n",a.arr2[i]);
	return 0;
}*/
