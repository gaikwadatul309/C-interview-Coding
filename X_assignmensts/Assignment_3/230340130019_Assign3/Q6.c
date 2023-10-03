/*
 * Authour: Atul Gaikwad and Rishi Suri
 * Date   : 04/04/2023
 * Program: 
*/


#include<stdio.h>
int main()
{
	int num1;
	float num2;

	printf("Please enter a number:\n");
	scanf("%d%f",&num1, &num2);
//	printf("Please enter a float number:\n");
//	scanf("Num2:%f",&num2);

	printf("%d\n", num1);
	printf("%5d\n", num1);
	printf("%05d\n", num1);
	printf("%-5d\n",num1);
	printf("%8.2f\n", num2);
	printf("%0.2f\n", num2);
}


	
