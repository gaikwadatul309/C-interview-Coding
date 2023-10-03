/******************************************************************************
*Assignment: 5                                     Date: 21/04/2023
*Program statement:Q3. c program to addition of two arrays & print
*
*******************************************************************************/
#include<stdio.h>
int main()
{
	int a1[4],a2[4],s[4];
	printf("Enter the elements of first arrary:\n");
	for(int i=0;i<4;i++){         //taking input of array 1 from user
	     scanf("%d",&a1[i]);
	}
	printf("Enter the elements of second array:\n");
	for(int j=0;j<4;j++){          //taking input of array 2 from user
	     scanf("%d",&a2[j]);
	}
	printf("\nthe addition of array is =");

	for(int i=0;i<4;i++){
	     s[i]= a1[i] + a2[i];          //addition of two array
	}
	for(int i=0;i<4;i++){
	     printf("%d\t",s[i]);
	} 
	return 0;
}
                    