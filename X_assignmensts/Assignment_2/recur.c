#include<stdio.h>
int fibonacci(int);
int main(){

	int num,fibo;
	printf("Enter max num: ");
	scanf("%d",&num);
	fibo=fibonacci(num);
	printf("Fibonacci Series of: %d  is :%d",num,fibo);
}
int fibonacci(int num){
	

	if(num==1){
		return 1;
	}
	else{
	  return num*fibonacci(num-1);
	}

}
