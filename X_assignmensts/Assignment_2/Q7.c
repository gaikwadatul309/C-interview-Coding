

#include<stdio.h>
#include<math.h>
int main(){

	int num, count=0, a=0, temp, rem;
	printf("Enter any number: ");
	scanf("%d",&num);
	temp=num;
	while(temp!=0)
	{
		temp=temp/10;
		count++;
	}
	temp=num;
	while(temp!=0)
	{
	rem=temp%10;
	a=a+pow(rem,count);
	temp=temp/10;
	}
	if (a==num)
	{
	printf("%d the given number is armstrong number\n", num);
	}
	else 
	printf("%d The given number is not an armstrong number\n", num);
	
	
	



}
