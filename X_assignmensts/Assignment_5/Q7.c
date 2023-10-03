/******************************************************************************
*Assignment: 5                           Date: 21/04/2023
*Program statement:Q7. c program to transpose the given matrix
*******************************************************************************/
#include<stdio.h>

void funT(int (*)[3],int (*)[3]);		//function declarations
void funScan(int [][3]);
void funPrint(int [][3]);
int main(){
	int a[3][3],b[3][3];
	
	funScan(a);
	printf("\n");
	funPrint(a);
	printf("----Transpose----\n");
	funT(a,b);
	funPrint(b);
	
	return 0;
}
void funScan(int a[][3]){					//function defination of input the array
	printf("Enter elements of 3*3 array : \n");
	for(int i=0;i<=2;i++){
		for(int j=0;j<=2;j++)
			scanf("%d",&a[i][j]);
	}
}

void funPrint(int a[][3]){				//function defination of displaying the array
	for(int i=0;i<=2;i++){
		for(int j=0;j<=2;j++)
			printf("%d\t",a[i][j]);
		printf("\n");
	}
	printf("\n");
}
		
void funT(int (*a)[3],int (*b)[3]){		//function defination of transpose the array
	for(int i=0;i<=2;i++){
		for(int j=0;j<=2;j++){
			*(*(b+j)+i)=*(*(a+i)+j);
		}
	}
}

