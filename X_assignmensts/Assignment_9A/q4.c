
/******************************************************************************
 * Author: Atul Gaikwad and Rishi Suri
 * Assigment : 9A                                * Date: 22/04/2023
 * Program statement: Q4. c program to find the area of triangle by using function 
*******************************************************************************/
#include<stdio.h>
struct area{
	int l;
	int b;
	int a;
}ar;
int farea(int *m,int*n);
int main ()
{
   int area1;
   printf("enter the value of length and breadth\n");
   scanf("%d%d",&ar.l,&ar.b);           // input from user
   int *m;
   m=(int*)&ar.l; 
   int *n;
   n=(int*)&ar.b;
   area1=farea(m,n); //passing element of structure to function
   ar.a=area1; // store the return value
   printf("area of triangle =%d\n",ar.a);
   return 0;
}

int farea(int *m,int*n){  // ponter to element of structure
	int area2;
	area2=*n * *m;   // calculate area 
	return area2; //return area to function
}



