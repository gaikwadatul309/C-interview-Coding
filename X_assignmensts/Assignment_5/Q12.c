/******************************************************************************
*Assignment: 5                           Date: 21/04/2023
*Program statement:Q12. c program to Check whether given matrix is identity or not?
*******************************************************************************/
#include<stdio.h>
int col =3;
int is_identity(int (*)[col]);
void funScan(int [][col]);
void funPrint(int [][col]);

int main(){
	int b[3][3];
	funScan(b);
	funPrint(b);
	printf("\n");
	
	if(is_identity(b))
		printf("Matrix is identity\n");
	else
		printf("Matrix is not identity\n");
	
	

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

int is_identity(int a[][col]){
	for(int i=0;i<col;i++){
		for(int j=0;j<col;j++)
			if(i==j){
				if(a[i][j]!=1)
					return 0;
			}
			/*else if(i==col-j){
				if(a[i][j]!=1);
				return 0;*/
			}
			else if(a[i][j]!=0)
				return 0;
	}
	return 1;
}
