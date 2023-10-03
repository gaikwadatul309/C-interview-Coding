/*
 * Authour: Rishi suri & Atul Gaikward
 * Program: Evaluate the following Expressions
*/#include<stdio.h>
int main(){
	int a[5]={10,20,30,40,50};
	int *p =a,*q=*(&a+1)-1;
	

	printf("*p++ = %d\n",*p++);	//10
	printf("*++p = %d\n",*++p);	//30	
	printf("(*p)++ = %d\n",(*p)++);//30
	printf("++*p = %d\n",++*p);	//32
	printf("*(p++) = %d\n",*(p++));//32
	printf("*(++p) = %d\n",*(++p));//50			
	
	printf("*q-- = %d\n",*q--);	//50
	printf("*--q = %d\n",*--q);	//32
	printf("(*q)-- = %d\n",(*q)--);//31
	printf("--*q = %d\n",--*q);	//30
	printf("*(q--) = %d\n",*(q--));//20
	printf("*(--q) = %d\n",*(--q));//10
	return 0;
}
