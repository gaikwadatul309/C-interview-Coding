/******************************************************************************
*Assignment: 5                           Date: 21/04/2023
*Program statement:Q6. c program to perform arithmatic operation
*******************************************************************************/
#include<stdio.h>
void funMult(int (*a)[3],int (*b)[3]);
void funAdd(int (*)[3],int (*)[3]);          //functions declarations
void funSub(int (*)[3],int (*)[3]);
void funScan(int [][3]);
void funPrint(int [][3]);
int main(){
	int a[3][3],b[3][3],c[3][3];
	
	funScan(a);
	funScan(b);
	funPrint(a);
	funPrint(b);
	printf("Addition of arrays: \n");
	funAdd(a,b);
	printf("\n");
	printf("Subtration of arrays: \n");
	funSub(a,b);
	printf("\n");
	printf("Multiplication of arrays: \n");
	funMult(a,b);
	printf("\n");
	
	return 0;
}
void funScan(int a[][3]){
	printf("Enter elements of a 3*3 array : \n");
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
		
void funAdd(int (*a)[3],int (*b)[3]){        //functin call for Addition
	for(int i=0;i<=2;i++){
		for(int j=0;j<=2;j++){
			printf("%d\t",*(*(a+i)+j)+*(*(b+i)+j));
		}
		printf("\n");
	}
}

void funSub(int (*a)[3],int (*b)[3]){        //function for Subtration
	for(int i=0;i<=2;i++){
		for(int j=0;j<=2;j++){
			printf("%d\t",*(*(a+i)+j)-*(*(b+i)+j));
		}
		printf("\n");
	}
}
void funMult(int (*a)[3],int (*b)[3]){       //function call for Multiplication
	int c=0;
	for(int i=0;i<=2;i++){
		for(int j=0;j<=2;j++){
		printf("%d\t",*(*(a+i)+j) * *(*(b+i)+j));
		}
	printf("\n");
	}
	
}
	
