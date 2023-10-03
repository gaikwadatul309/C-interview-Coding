/******************************************************************************
*Assignment: 5                           Date: 21/04/2023
*Program statement:Q10. c program to find Determinant of matrix
*******************************************************************************/
#include<stdio.h>
int col=2;
void funScan(int [][col]);
void PrintEq(int [][col],int d[3]);
int adj_det(int(*)[col]);
void inverse(int [][col],float [][3],int);
int expand[4][4];

int main(){
	int a[3][3],d[3];
	float inv[3][3],res[3]={0,0,0};
	printf("Example of two variable equation is ax+by=d\n");
	printf("Example of three variable equation is ax+by+cz=d\n");
	printf("Instructions:\n You have to enter the a, and c part of every equation first then the d part\n");
	
	printf("\nHow many equations are there(2 or 3): ");
	scanf("%d",&col);
	funScan(a);
	printf("Now enter the d value\n");
	for(int i=0;i<col;i++)
		scanf("%d",d+i);
	
	printf("\n");
	printf("Your equations:\n");
	PrintEq(a,d);
	
	int det = adj_det(a);
	inverse(a,inv,det);
	
	//solving the equations by multiplying the inverse matrix and constants(d)
	for(int i=0;i<col;i++){
	char vars[]={'x','y','z'};
		for(int j=0;j<col;j++)
			res[i]+=inv[i][j]*d[j];
		printf("%c = %.2f\n",vars[i],res[i]);
		
	}
	
	return 0;
	
}

//function to scan (take input) a matrix
void funScan(int a[][col]){
	printf("enter the a,b and c(if 3 equation) of every euation:\n");
	for(int i=0;i<col;i++){
		for(int j=0;j<col;j++)
			scanf("%d",&a[i][j]);
	}
}

//function to print a matrix
void PrintEq(int a[][col],int d[3]){
	char vars[]={'x','y','z'};
	for(int i=0;i<col;i++){
		for(int j=0;j<col;j++){
			if(a[i][j]!=0){
				if(j==0)
					printf("%d%c",a[i][0],vars[0]);
				else
					printf("%+-d%c",a[i][j],vars[j]);
			}
		}
		printf(" = %d\n",d[i]);
	}
				
}

//function to 
int adj_det(int(*a)[col]){
	int temp=0;
	int first_row[3] = {a[0][0],a[0][1],a[0][2]};
	if(col==3){
		for(int i=0;i<=3;i++){
			for(int j=0;j<=3;j++)
				expand[j][i] = a[(i+1)%3][(j+1)%3];
		}
		//expanding the matrix
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++)
				a[i][j] = ((expand[i][j]*expand[i+1][j+1])-(expand[i][j+1]*expand[i+1][j]));
		}
		//calculating the determinant	
		for(int i=0;i<3;i++)
			temp+=first_row[i]*(expand[i][0]*expand[i+1][1]-expand[i][1]*expand[i+1][0]);	
		return temp;
	}
	else{
		temp = a[0][0];
		a[0][0]= a[1][1];
		a[1][1] = temp;
		a[0][1]=-a[0][1];
		a[1][0]=-a[1][0];
		temp=0;
		temp+=a[0][0]*a[1][1]-a[0][1]*a[1][0];
		return temp;
	}
}

//function to find the inverse of a matrix
void inverse(int a[][col],float b[][3],int d){
	for(int i=0;i<col;i++){
		for(int j=0;j<col;j++)
			b[i][j]=(float)a[i][j]/d;
		printf("\n");
	}

}



