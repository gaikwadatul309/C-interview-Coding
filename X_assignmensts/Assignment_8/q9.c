// find sum and avg  by using inline function 

#include<stdio.h>
static inline int sum(int a,int b);

int main(){
	int a=10,b=20;
	sum(a,b);          // inline functio reolace the function with the code itself written in function
	return 0;
}

static inline int sum(int a,int b)
{
	printf("the sum is %d\n",a+b);
	printf("the avg is %d",(a+b)/2);
}

