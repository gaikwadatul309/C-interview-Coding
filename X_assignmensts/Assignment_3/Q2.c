/*
 * Authour:  Rishi Suri and Atul Gaikwad
 * Date   : 04/04/2023
 * Program: swaping of two numbers with, without temporary variable and X-OR operator
*/


// Swapping of two numbers with  EX-OR operator

#include<stdio.h>
#include<math.h>
int main(){
	int a, b;
	printf("Enter two numbers:\n");
	printf("The first number a= ");
	scanf("%d",&a);
	printf("The second number b= ");
	scanf("%d",&b);

	printf("The numbers before swaping a= %d and b=%d \n", a,b);

	a=a^b;
	b=a^b;
	a=a^b;
	printf("The numbers after swaping a=%d and b=%d \n",a,b);
}

// With temprary variable

/*
#include<stdio.h>
int main(){
	int temp, a, b;
	printf("Enter two numbers:\n");
	printf("The first number a= ");
	scanf("%d",&a);
	printf("The second number b= ");
	scanf("%d",&b);

	printf("The numbers before swaping a= %d and b=%d \n", a,b);

	temp=a;							// temporary variable for swaping
	a=b;
	b=temp;

	printf("The numbers after swaping a=%d and b=%d \n",a,b);	
}

*/

// without temporary variable
/*
#include<stdio.h>
int main(){
	int a, b;
	printf("Enter two numbers:\n");
	printf("The first number a= ");
	scanf("%d",&a);
	printf("The second number b= ");
	scanf("%d",&b);

	printf("The numbers before swaping a= %d and b=%d \n", a,b);

	a=a+b;
	b=a-b;
	a=a-b;

	printf("The numbers after swaping a=%d and b=%d \n",a,b);
}
*/

 
