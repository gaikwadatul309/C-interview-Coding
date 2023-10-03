#include<stdio.h>
int main(){

	int factorial=1,num,i=0;
	printf("Enter any number: ");
        scanf("%d",&num);
        for(i=num;i>0;i--){
	   factorial=factorial*i;
	}	

	printf("Factorial is: %d",factorial);
	return 0;
}
