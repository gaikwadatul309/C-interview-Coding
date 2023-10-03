
/******************************************************************************
 * Author: Atul Gaikwad and Rishi Suri
 * Assigment : 9A                                * Date: 22/04/2023
 * Program statement: Q6. c program to modify data after display
*******************************************************************************/
#include<stdio.h>
struct info{
	char n[20];
	int  a;
	char g[10];
	char c[10];
	int  p;
        char m[10];
	int  s;
}d;
int main(){
	label:
	printf("Enter your details name,age,gender,city ,pin,marital status,annual salary\n");
	scanf("%s %d %s %s %d %s %d",d.n,&d.a,d.g,d.c,&d.p,d.m,&d.s); //scan the info 
	printf("your name is %s\n",d.n);      // printf the following input 
	printf("your age is %d\n",d.a);
	printf("your gender is %s\n",d.g);
	printf("your city is %s\n",d.c);
	printf("your pin is %d\n",d.p);
	printf("your marital status is %s\n",d.m);
	printf("your annual salary is %d\n",d.s);
	goto me;
	char ch;
	me:
		printf("do you want to modify? if yes enter y \n ");
		scanf("%c",&ch);
		switch(ch){
			case 'y': 
					goto label;
			default: 
					printf("thank you\n");
			}
		return 0;
}
	
