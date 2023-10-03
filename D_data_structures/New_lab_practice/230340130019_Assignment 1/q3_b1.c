/******************************************************************************
 * Author      : Rishi suri & Atul Gaikward              *Date : 26/04/2023
 * Assigment   : Data structures -1                              
 * statement   : Q3(b1)-  Allocating 2D array dynammically with contiguous rows
                  and fixed number of column's
*******************************************************************************/


#include<stdio.h>
#include<stdlib.h>

int main(){
	int ((*ptr)[3]),i,j,rows;
	printf("Enter the no of rows: ");
	scanf("%d", &rows);

	ptr=(int (*)[3])malloc(rows*3*sizeof(int));

	//Enter the elements of the array
	for(i=0;i<rows;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the elements[%d][%d]",i,j);
			scanf("%d",&ptr[i][j]);
		}
	}
	printf("The array is -->\n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",ptr[i][j]);
		}
		printf("\n");
	}

	free(ptr);
}
































