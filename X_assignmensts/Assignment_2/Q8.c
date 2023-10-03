
#include<stdio.h>

int main()
{
	int num,sum=0;
	printf("Enter any natural number:\n");
	scanf("%d",&num);
	for(int i=1; i<=num;i++)
	{
		if(num%i==0)
		{
		sum=sum+i;
		}
	}
	if (num==sum/2)
	{
		printf("%d The given number is perfect number\n",num);
	}
	else 
		printf("The given number is not a perfect number\n");
		
}
