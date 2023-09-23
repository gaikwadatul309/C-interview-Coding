#include <stdio.h>

int main(){
	int a, b, c, largest = 0, smallest = 0;
	printf("Enter the values: \na : ");
	scanf("%d", &a);

	printf("b : ");
	scanf("%d", &b);

	printf("c : ");
	scanf("%d", &c);

	largest = (a > b) ? (a > c ? a : c):(b > c ? b : c);

	printf("The largest number of given is : %d\n", largest);

	smallest = (a < b) ? (a < c ? a : c):(b < c ? b : c);

	printf("The largest number of given is : %d\n", smallest);
	
	return 0;
}
