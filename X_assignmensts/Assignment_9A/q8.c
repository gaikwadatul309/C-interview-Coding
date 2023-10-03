/******************************************************************************
 * Author: Atul Gaikwad and Rishi Suri
 * Assigment : 9A                                * Date: 22/04/2023
 * Program statement: Q8. c program to store radius and area of 10 circles using structur &loops
*******************************************************************************/
#include<stdio.h>
#include<string.h>  
struct area{
	int r;
	float a;
};

int main ()
{
	struct area str[10];
	printf("Enter the area of 10 circles\n");
	for (int i=0;i<10;i++){
		printf("enter the radius\n");
		scanf("%d",&str[i].r);
	}


	printf("The area of circle is:\n");
	for (int i=0;i<10;i++){
		printf("%f\n",str[i].r*str[i].r*3.14);
	}
	return 0;
}
