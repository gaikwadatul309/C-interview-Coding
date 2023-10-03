/*
 * Authour: Rishi suri & Atul gaikward
 * Program: 	What is the significance of following pointer
	       int (*q)[3][4];
	       What are the sizes of q, *q, **q, ***q
	       Write some code to test this with a 2D array.
*/

#include<stdio.h>
int main(){
	int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
	
	int (*parr)[3][4]=&arr;
	
	printf("sizeof(arr) = %ld\n",sizeof(arr));		//48
	printf("sizeof(parr) = %ld\n",sizeof(parr));		//8
	printf("sizeof(*parr) = %ld\n",sizeof(*parr));	//48
	printf("sizeof(**parr) = %ld\n",sizeof(**parr));	//16
	printf("sizeof(**parr) = %ld\n",sizeof(***parr));	//4
	
	return 0;
}
