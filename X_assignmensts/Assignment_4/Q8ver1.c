/******************************************************************************
*Assignment: 4                                      Date: 21/04/2023
*Program statement:Q8. c program to count number of 1s & no of 0s in binary number
*
*******************************************************************************/
#include <stdio.h>
void count1s0s(int N)               // Function to count the number of 0s & 1s in binary representation of N
{
	// Initialise count variables
	int count0 = 0, count1 = 0;
	while (N > 0) {                // Iterate through all the bits

		// If current bit is 1
		if (N  & 1) {
			count1++;
		}
		// If current bit is 0
		else {
			count0++;
		}

		N  = N  >> 1;
	}
	printf("Count of 0s  is: %d\n", count0);        //print cound for zeros
	printf("Count of 1s  is: %d\n", count1);        //print cound for ones
}

int main()
{
    int N;
	printf("Enter a number: ");
    scanf("%d", &N);
	count1s0s(N);           // Function Call
	return 0;
}



