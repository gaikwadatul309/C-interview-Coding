*
 * Authour:  Rishi Suri and Atul Gaikwad
 * Program:  C program based on integer array. Implement method to find average, sum, min element, max element.
*/

#include<stdio.h>
#include<stddef.h>
  

int main(){
	int size;
	int i,arr[1000],max,min,sum=0;
	printf("Enter the size of array:");
	scanf("%d",&size);
	for(i=0;i<size;i++){
	printf("Enter the elements in array of arr[%d]:\n",i);
	scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++){
	printf("%d\t",arr[i]);
	}
	printf("\n\n\n");
	max=arr[0];
	min=arr[1];
	for(i=0;i<size;i++){
		if(max<arr[i]){
			max=arr[i];
			}
		else if(min>arr[i]){
			min=arr[i];
			}
	}
	printf("The max and min element in the array is %d & %d\n",max,min);

	printf("\n\n\n\n");

	for(i=0;i<size;i++){
		sum=sum+arr[i];
	}
	printf("The sum of all elements in this integer array is %d\n",sum);
	printf("The average of %d array elements is %f\n", size,(float)sum/size);
	
	
	return 0;
}
