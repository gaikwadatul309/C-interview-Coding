#include <stdio.h>

int main(){

	int num, pos;
	printf("Enter number: \n");
	scanf("%d", &num);

	printf("Enter pos: \n");
	scanf("%d", &pos);

//	num >> pos & 1 ? printf("set \n") :printf("clear\n");
	
	num & 1 << pos ? printf("set \n") : printf("Clear \n");

	return 0;
}
