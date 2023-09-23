/* ******************************************************************************************
 * Author: Atul J Gaikwad
 * Date: 30/07/2023
 * Program: To check given number is perfect number or abundant number or deficient number
 * -----------------------------------------------------------------------------------------
 * NOTE:-
 * -----------------------------------------------------------------------------------------
 * Abundant Numebr:  A number that is smaller than the sum of its proper devisors
 *-----------------------------------------------------------------------------------------
 * Deficient Number: A number that is greater than the sum of its proper devisors.
 *-----------------------------------------------------------------------------------------
 * Perfect Number: A number that is equal to the sum of the its proper devisors.
 *
 * ******************************************************************************************/

#include <stdio.h>

int main()
{
	int a, i, sum = 0;
	printf("Enter any number: ");
	scanf("%d", &a);
	
	printf("Proper Divisors of %d: ", a);
	for(i=1; i < a; i++)
	{
		if(a % i == 0)
		{
			sum = sum + i;
			printf("%d,", i);
		}
	}
	if(i == a)
	{
		printf("\b.");
	}
	printf("\nSum = %d\n", sum);
	if(a < sum)
	{
		printf("Given number %d is a abundant number.\n", a);
	}
	else if(a == sum)
	{
		printf("Given number %d is a perfect number.\n", a);
	}
	else if(a > sum){
		printf("Given number %d is a Deficient number.\n", a);
	}


	return 0;
}
