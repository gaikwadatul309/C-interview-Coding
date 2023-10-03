#include<stdio.h>
int armstrong(int);
int main(){
	
	int n;
	printf("Enter any Number to Check Armstrong: ");
	scanf("%d",&n);
	armstrong(n);
	return 0;

}

int armstrong(int num){
	int sum=0;
	int remind=0;
	int x;



	//Actual calculation
	while(num!=0){

		remind=num%10;
		sum=sum+(remind*remind*remind);
		num=num/10;
	
	
	}

	if(sum==num){
		printf("This is Armstrong number\n");

	
	}else if(sum!=num){
		printf(" This is not a Armstrong Number\n");
	
	
	} return sum;

}
