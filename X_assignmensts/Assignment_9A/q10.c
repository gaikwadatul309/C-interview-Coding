/******************************************************************************
 * Author: Atul Gaikwad and Rishi Suri
 * Assigment : 9A                                * Date: 22/04/2023
 * Program statement: Q10. c program to dynamic memory allocation to a structure and free after use
*******************************************************************************/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct data {
	char name[10];
	char city[10];
}d1;
int main(){
        int *d;
	d=(int*)malloc(sizeof(struct data));
	printf("Enter your name:\n");
	scanf("%s",d1.name);

	printf("Enter your city:\n");
	scanf("%s",d1.city);
	
	printf("The name is:%s\n",d1.name);
	printf("The city name is:%s\n",d1.city);
	free(d);

return 0;
}

