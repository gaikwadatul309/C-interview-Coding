/******************************************************************************
*Assignment: 5                           Date: 21/04/2023
*Program statement:Q11. c program to find identity or null of matrix
*******************************************************************************/
#include<stdio.h>
int col =0;
void genIde_null(int (*)[col],char);
void funScan(int [][col]);
void funPrint(int [][col]);

int main(){
	int a[2][2],b[3][3];
	
	printf("What is the size of square matrix (2 or 3): ");
	scanf("%d",&col);
	printf("press 'i' for identity matrix and 'n' for null matrix:");
	__fpurge(stdin);
	printf("\n");
	if(col==2){
		genIde_null(a,getchar());
		funPrint(a);
	}
	else{
		genIde_null(b,getchar());
		funPrint(b);
	}

	return 0;
}
void funPrint(int a[][col]){
	for(int i=0;i<col;i++){
		for(int j=0;j<col;j++)
			printf("%d\t",a[i][j]);
		printf("\n");
	}
	printf("\n");
}

void genIde_null(int a[][col],char t){
	for(int i=0;i<col;i++){
		for(int j=0;j<col;j++)
			if(i==j && t=='i')
				a[i][j]=1;
			else
				a[i][j]=0;
	}
}
