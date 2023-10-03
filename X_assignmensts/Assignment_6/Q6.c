/*
 * Authour: Rishi Suri & Atul Gaikward
 * Program: wap to test Arithmetic operations on void pointer
*/#include<stdio.h>
int main(){
	int a[]={0xffffffff,2,3,4,5};
	
	void *p=a;
	
	printf("*p = %p\n",p);
	printf("*p = %u\n",*((unsigned int*)++p));
	
	
	/*
	
	//int (*p)[5];
	int *p=(int *)(&a+1);
	
	printf("%d\t",*(p-1));
	
	printf("%u\n",a);
	printf("%u",++p);
	/*
//	void *p=(int (*)[5])a;
	
	printf("*p = %d and %p\n",*p,p);
	printf("*p = %d and %p\n",*(p+1),p+1);
	printf("*p = %p\n",&a);
	printf("*p = %p\n",(&a+1));
	
	int *q = (&a+1);
	*/
	
	return 0;
}
