/*
 * Authour: Rishi Suri and Atul Gaikwad
 * Date   : 04/04/2023
 * Program: Program to print PAscal triangle
*/
 
#include<stdio.h>
int main(){
	int i,s,j,rows,c;
	printf("Enter the Number of Rows in the Pascal Triangle:");
	scanf("%d",&rows);
	for(i=0;i<rows;i++){
		for(s=1;s<rows-i;s++)
			printf(" ");         //Prints spaces as many as number of rows in the triangle-current number of row
		for(j=0;j<=i;j++){
			if(i==0||j==0){
				c=1;
				printf("%5d",c);    // %5d means length specifier.
			}else{
				c=(c*(i-j+1))/j;   // Finding the values for each place.
				printf("%2d",c);   // %2d means length specifier.
			}
		}
		printf("\n");
	}
	return 0;
}
