/******************************************************************************
*Assignment: 5                                     Date: 21/04/2023
*Program statement:Q3. c program to reversing elements of array in memory & print
*
*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>
int main()
{

int arr[5]={15,25,35,45,55};
int *p,c,rev,i,j=4;
p=(int *)&arr;
for(int i=0;i<5;i++)
	printf("%d = %p\n",p[i],&p[i]);
printf("reverse in memory\n");
for(int i=0;i<5;i++)
{
	rev=arr[i];
	c=p[j];
	p[j]=rev;           //reversing elements 
	arr[i]=c;           //reversing elements
	j--;
printf(" %d = %p\n ",arr[i],&arr[i]);
}
return 0;
}