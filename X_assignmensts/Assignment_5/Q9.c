/******************************************************************************
*Assignment: 5                           Date: 21/04/2023
*Program statement:Q9. c program to find Determinant of matrix
*******************************************************************************/
#include<stdio.h>
int col =2;
int funD(int (*a)[2]);
void funScan(int [][col]);
void funPrint(int [][col]);
int funDet(int(*)[3]);
int main(){
	int a[2][2],b[3][3];
	printf("What is the size of square matrix (2 or 3): ");
	scanf("%d",&col);
	if(col==2){
		funScan(a);
		printf("\n");
		funPrint(a);

		printf("%d\n",funD(a));
	}
	else {
		funScan(b);
		printf("\n");
		funPrint(b);
		printf("%d\n",funDet(b));
	}

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
		
int funD(int (*a)[2]){
	
	return *(*(a+0)+0)*(*(*(a+1)+1))-*(*(a+0)+1)*(*(*(a+1)+0));

}

int funDet(int(*a)[3]){
	int temp=0;
	for(int j=0;j<3;j+=2)
		temp+=a[0][j]*(a[1][(j+1)%3]*a[2][(j+2)%3]-a[1][(j+2)%3]*a[2][(j+1)%3]);
	
	
	temp-=a[0][1]*(a[1][0]*a[2][2]-a[1][2]*a[2][0]);
	return temp;
}

