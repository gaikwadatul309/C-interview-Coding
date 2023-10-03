#include<stdio.h>
int main(){

     //Program to reverse Three Digit Number

	int a,b;
	printf("Enter Your number: ");
	scanf("%d",&a);
	b=(a%10)*100+((a/10)%10)*10+a/100;

	printf("Before Reversing number is: %d , After Reversing Number is: %d",a,b);
	return 0;


}
