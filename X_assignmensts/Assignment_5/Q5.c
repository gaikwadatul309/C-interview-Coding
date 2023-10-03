/******************************************************************************
*Assignment: 5                           Date: 21/04/2023
*Program statement:Q5. c program to addition of polynomials
*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>
int Pow(int,int);
int main(){
	int n,res=0;
	printf("How many terms are there in polynomial: ");
	scanf("%d",&n);
	int *a=(int *)malloc(4*n);
	int *x=(int *)malloc(4*n);
	printf("Enter the cofficients:\n");
	for(int i=0;i<n;i++)
		scanf("%d",a+i);
	printf("Enter the variables:\n");
	for(int i=0;i<n;i++)
		scanf("%d",x+i);
	
	for(int i=0;i<n;i++)
		res=res+*(a+i)*Pow(*(x+i),n-i);
		
	printf("The result is: %d\n",res);
	free(a);
	free(x);
	
	return 0;
}

int Pow(int a, int b){
	int power=1;
	if(a!=0 && b!=0){
		for(int j=0;j<b;j++)
			power=power*a;
	}
	else if(a!=0 && b==0)
		return power;
	else
		return 0;
	
	return power;	
}