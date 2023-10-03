/******************************************************************************
*Assignment: 5                           Date: 21/04/2023
*Program statement:Q13. c program to Check whether given matrix is null or not?
*******************************************************************************/
#include<stdio.h>
int col =3;
int is_Null(int (*)[col]);
void funScan(int [][col]);
void funPrint(int [][col]);

int main(){
	int b[3][3];
	funScan(b);
	funPrint(b);
	printf("\n");
	
	if(is_Null(b))
		printf("Matrix is NULL\n");
	else
		printf("Matrix is not NULL\n");
	return 0;
	
}

void funScan(int a[][col]){
	printf("enter ele of %d*%d array : ",col,col);
	for(int i=0;i<col;i++){
		for(int j=0;j<col;j++)
			scanf("%d",&a[i][j]);
	}
}

void funPrint(int a[][col]){
	for(int i=0;i<col;i++){
		for(int j=0;j<col;j++)
			printf("%d\t",a[i][j]);
		printf("\n");
	}
	printf("\n");
}

int is_Null(int a[][col]){
	for(int i=0;i<col;i++){
		for(int j=0;j<col;j++)
			if(a[i][j]!=0)
				return 0;
	}
	return 1;
}
