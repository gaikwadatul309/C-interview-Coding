
/*
 * Authour: Rishi Suri  & Atul Gaikward
 * Program: Accessing of Array element with suitable derefrencing of parr
*/
#include<stdio.h>
int main(){
	int arr[5]={1,2,3,4,5};
	
	int (*parr)[5]=&arr;
	
	printf("sizeof(arr) = %ld\n",sizeof(arr));		//20
	printf("sizeof(parr) = %ld\n",sizeof(parr));		//8
	printf("sizeof(*parr) = %ld\n",sizeof(*parr));	//20
	printf("sizeof(**parr) = %ld\n",sizeof(**parr));	//4

	
	return 0;
}
