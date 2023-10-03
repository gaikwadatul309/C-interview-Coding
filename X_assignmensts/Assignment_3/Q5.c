/*
 * Authour: Atul Gaikwad and Rishi Suri
 * Date   : 04/04/2023
 * Program: input time hh:mm:ss into total seconds
*/

#include<stdio.h>
int main()
{
	int hh,mm,ss;
	printf("Enter time in hh:mm:ss(12 hours) format:");
	scanf("%d:%d:%d",&hh, &mm, &ss);
	printf("Your enter time is: %d:%d:%d\n Hrs",hh,mm,ss);

	int total_second=0;
	total_second=(ss+(mm*60)+(hh*60*60));		// the seconds gets caluculted by this formula

	printf("the time in total second is: %d\n",total_second);
}
