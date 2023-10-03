
#include<stdio.h>
int main(){

	int num,j=0,k=1,sum=0,r;
	printf("Enter any number: ");
	scanf("%d",&num);
	//for(int i=0;i<2;i++){
	//   printf("%d\t",i);
	   for(int i=1;i<=num;i++){
	      r=j+k;
	      printf("%d \t",r);
	      j=k;
	      k=r;
	   }
	 
	
	}


}
