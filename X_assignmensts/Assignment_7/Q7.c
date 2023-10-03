/******************************************************************************
 * Author: Atul Gaikwad and Rishi Suri
 * Assigment : 7                                 * Date: 22/04/2023
 * Program statement: Q7. c program to check and fix the error of input given 
*******************************************************************************/
#include<stdio.h>
void test(const int* q);
void test2(int* p);
int main(){
	int a=55;
	int *p;
	p=(int *)&a;
        const int *q;
	q=(const int*)&a;
	test(q);
	test2(p);
	return 0;}

void test(const int *q)
{
printf("q=%d\n",*q);
}

void test2(int*p)
{
	printf("p=%d\n",*p);
}

