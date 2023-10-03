/******************************************************************************
*Assignment: 5                           Date: 21/04/2023
*Program statement:Q8. c program to trace of matrix
*******************************************************************************/
#include<stdio.h>

void funTraces(int (*a)[3]);
void funScan(int [][3]);
void funPrint(int [][3]);
int main(){
	int a[3][3];
	
	funScan(a);
	printf("\n");
	funPrint(a);
	printf("---Traces----\n");
	funTraces(a);       //function call for matrix trace
	
	return 0;
}
void funScan(int a[][3]){
	printf("enter ele of 3*3 array : ");
	for(int i=0;i<=2;i++){
		for(int j=0;j<=2;j++)
			scanf("%d",&a[i][j]);
	}
}

void funPrint(int a[][3]){
	for(int i=0;i<=2;i++){
		for(int j=0;j<=2;j++)
			printf("%d\t",a[i][j]);
		printf("\n");
	}
	printf("\n");
}
		
void funTraces(int (*a)[3]){       //function defination for trace matrix
	int temp=0;
	for(int i=0;i<=2;i++){
		for(int j=0;j<=2;j++){
			if(i==j)
				temp=temp+*(*(a+i)+j);
		}
	}
	printf("%d\n",temp);
}
