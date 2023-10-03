/******************************************************************************
 * Author      : Rishi suri & Atul Gaikward              *Date : 26/04/2023
 * Assigment   : Data structures -1                              
 * statement   : Q3(b2)-  Allocating 2D array dynammically with non-contiguous rows
                  and variable number of column's
*******************************************************************************/

#include<stdio.h>
#include<stdlib.h>

int main(){
	int (**a),i,j,rows,cols;
	printf("Enter the number of rows and cols: ");
	scanf("%d%d", &rows, &cols);

	a=(int **)malloc(rows*cols*sizeof(int));

	//Allocating the 1D array of integers for each row pointer
	for(i=0;i<rows;i++)
	{	
		a[i]=(int*)malloc(cols*sizeof(int));
	}
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			printf("Enter a[%d][%d]= ",i,j);
			scanf("%d", &a[i][j]);
		}
	}
	/* printing the elements of the array*/
	printf("The matrix is : \n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}
	/* for checking the memory address of the 2D array */
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			printf("%p\t%p", a[i],a[j]);
		}
		printf("\n");
	}
	/* free the memory allocated to the non contiguous 1D array*/
	for(i=0;i<rows;i++)
	{
		free(a[i]);
	}
	free (a);
	return 0;
}
