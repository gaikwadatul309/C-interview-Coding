/*
 * Authour:  Rishi Suri & Atul Gaikward
 * Program: Access 2D array using pointers
	   int arr[3][4]; int (*p)[4]; p=arr;
	   sizeof(p), sizeof(*p), sizeof(**p) , values of p, p+1
	  Check equivalence of arr[i][j], (*(p+i))[j], *(*(p+i)+j)
*/

#include<stdio.h>
int main(){
	int arr[3][4]={1, 2, 3, 4,
			5, 6, 7, 8,
			9,10,11,12};
	int (*p)[4]=arr;
	printf("sizeof(p) = %ld\n",sizeof(p));	//8
	printf("sizeof(*p) = %ld\n",sizeof(*p));	//16
	printf("sizeof(**p) = %ld\n",sizeof(**p));	//4
	
	printf("p = %p\n",p); //100
	printf("p = %p\n",p+1);//116
	

	printf("arr[0][0] = %d\n",arr[0][0]);		//1
	printf("*(*(p+0)+0) = %d\n",*(*(p+0)+0));	//1
	printf("(*(p+0))[0] = %d",(*(p+0))[0]);	//1
	
	
	
	return 0;
}
