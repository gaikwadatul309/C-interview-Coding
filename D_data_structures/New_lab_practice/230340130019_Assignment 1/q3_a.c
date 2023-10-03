 /******************************************************************************
 * Author      : Rishi suri & Atul Gaikward              *Date : 26/04/2023
 * Assigment   : Data structures -1                              
 * statement   : Q3-(a) Allocating 1D array dynamically and access the elements
*******************************************************************************/




#include<stdio.h>
#include<stdlib.h>

int main(){
	int *ptr, col;
	printf("1D Array allocating dynamically and access the elements\n");
	printf("Enter the total number of columns: \n");
	scanf("%d", &col);
	
	ptr=(int *)malloc(col*sizeof(int));
	// by default memory allocated by malloc is garbage value
	if(ptr==NULL){
		printf("!!Memory is not available !!\n");
		exit (1);
	}

	/*Getting user input data into dynamic memory*/
	for(int i=0;i<col;i++){
		printf("Enter the value at %d th location: \n", i);
		scanf("%d", (ptr+i));
		}
	
	/* for displaying inserted data with respect to contiguous memory location */
	for(int j=0;j<col;j++){
		printf("Value at position %d is equal to : %d\t\n", j,*(ptr+j));
		printf("The address at ptr= %p\n",(ptr+j));
		}	
		free (ptr);	//free the dynamically allocated memory
		printf("The address at ptr after free the dynamic memory= %p\n",ptr);
		printf("The value at %p: %d \n",ptr,*ptr);  //garbage value
		return 0;
}
