/******************************************************************************
 * Author: Atul Gaikwad and Rishi Suri
 * Assigment : 7                                 * Date: 22/04/2023
 * Program:Q8. c program to  find sum of element of array ,smallest element and greatest element 
*******************************************************************************/
#include<stdio.h>
int sum(int a[4]);        // function declaration
int max(int a[4]);
int min(int a[4]);

int main(){
    int opt;
	int a[4]={1,2,3,4};
	int a2[2][2]={{5,6},{2,3}};
    printf("What is the size of array (1D or 2D): ");  
    scanf("%d",&opt);
    if(opt==1){
		sum(a);// function call
        min(a);
        max(a);
    }
    if(opt==2){
        sum(a2);// function call
        min(a2);
        max(a2);
    }
	return 0;
}

int sum(int a[4])
{  
	int s=0;
	for(int i=0;i<4;i++){ // loop to add the element of array
	    s= s + a[i];
	}
	printf("the sum is %d\n",s); 
} 

int max(int a[4]){
	int large;
	large=a[0];
	for(int i=0;i<4;i++){        // loop to find max number
		if(a[i]>large)
			large=a[i];
	}
	printf("%d is larger number\n",large);
}

int min(int a[4]){
	int small;
	small=a[0];
	for(int i=0;i<4;i++){    //loop to find least numbers in array
		if(a[i]< small)
			small=a[i];
	}
	printf("%d is smallest number\n",small);
}


