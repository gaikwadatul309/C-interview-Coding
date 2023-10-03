
//C Program to find out Sum and average of n numbers.

#include <stdio.h>
int main()
{
	int num, n;
	int sum=0;
	float Average;
	printf("Enter the number you want to sum and average:");
	scanf("%d", &num);
	for(int i=0;i<=num;i++)
	{
		scanf("%d", &n);
		sum=sum+n;
	}
	Average = sum/num;
printf("\nSum of the num=%d",sum);
printf("\nAverage of the num=%f", Average);
}
