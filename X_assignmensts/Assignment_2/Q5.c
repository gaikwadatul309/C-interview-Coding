/*
Prorgram Statement: To check the entered number is prime or not.
*/

#include<stdio.h>
int main()
{	
	int num, count=0;
	printf("How much prime numbers you want to print? ");
	scanf("%d",&num);
	for(int i=1;i<=num;i++){
	    for(int j=2;j<i;j++){
	        if(i%j==0){
	           count++;
	        }
	        
	    }
	    if(count==0 && i!=0)
	         printf("%d \t",i);
	         count=0;
	
	}
	printf("\n");
		
	return 0;
}

