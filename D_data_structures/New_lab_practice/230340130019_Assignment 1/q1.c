/******************************************************************************
 * Author      : Rishi suri & Atul Gaikward              *Date : 26/04/2023
 * Assigment   : Data structures -1                              
 * statement   : Q1. Write a C/C++ program that declares an array of length N
                 containing integers between 1 and N. Implement menu driven
                 program using switch case for below mentioned functionalities.
 
     (a) insert element at index   (b) delete element at index
     (c) find min val              (d) find max val
     (e) display array element     (f) reverse display array element
     (h) array element count       (i) avg of all array element  
     (j) determine if array contains any duplicates.
     (k) reverse array element     (g) search element in std::array<T, N> ;
     
*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>

#define MAX 50

void insert(int *);
void del(int *);
void min(int *);
void max(int *);
void display(int *);
void revdisplay(int *);
void search(int *);
void count(int *);
void avg(int *);
void duplicate(int *);
void reverse(int *);
int getmin(int, int);
int getmax(int, int);

int N;
int main(){
     int i,ch;
     printf("Enter the size of array: ");
     scanf("%d", &N);
     int arr[MAX];
     
     printf("Created an array of size %lu\n", sizeof (arr)/ sizeof (arr[0]));
     printf("\nEnter the elements of array:\n");
     for(i=0;i<N;i++){
		scanf("%d", &arr[i]);
		}
     while(1){                   //while true loop fo continuously or infinitely run program
          printf("-------------------------------------------------------------\n");
          printf("            ----------------MENU----------------             \n");
          printf("-------------------------------------------------------------\n");
          printf("\n1. Insert element at index   2. Delete element at index");
          printf("\n3. Find min val              4. Find max val ");
          printf("\n5. Display array element     6. Reverse display array element");
          printf("\n7. Array element count       8. Avg of all array element");
          printf("\n9. Determine if array contains any duplicates ");
          printf("\n10. Reverse array element");
          printf("\n11. Search element in std::array<T, N> \t12. Exit \n");
          printf("Enter your choice: ");
          scanf("%d", &ch);
          switch(ch){                     //Switch case is to menu driven the whole program
               case 1: insert(arr);
                       break;
               case 2: del(arr);
                       break;
               case 3: min(arr);
                       break;
               case 4: max(arr);
                       break;
               case 5: display(arr);
                       break;
               case 6: revdisplay(arr);
                       break;
               case 7: count(arr);
                       break;
               case 8: avg(arr);
                       break;
               case 9: duplicate(arr);
                       break;
               case 10: reverse(arr);
                       break;
               case 11: search(arr);
                       break;
               case 12: exit(0);
                       break;
               default : printf("Please choose a valid number: ");
          }  //end of switch 
     }  //end of while
    return 0;
}  //end of main

void insert(int *arr){  // Function to insert the data in array
     int i,index,ele;
     printf("\nEnter the index at which element is to be inserted: ");
     scanf("%d", &index);
     printf("\nEnter the value of the element: ");
     scanf("%d", &ele);
     N++;
     for(i=N-1;i>=index;i--){
          arr[i]=arr[i-1]; 
     }
     arr[index]=ele;
     printf("The array element after the insertion: \n");
     for(i=0;i<N;i++){
		printf("arr[%d]= %d\t", i,arr[i]);
	}
}
void del(int *arr){  //Function to delete the element from  a particular index in array
     int i,index,ele;
     printf("\nEnter the index from which element is to be deleted: ");
     scanf("%d", &index);
  
     for(i=index;i>=N;i--){
          arr[i]=arr[i+1]; 
     }
     N--;
     printf("The array element after the insertion: ");
     for(i=0;i<N;i++){
		printf("arr[%d]= %d\t", i,arr[i]);
	}
}

void display(int *arr){
     printf("Created an array of size %lu\n", sizeof (arr)/ sizeof (arr[0])); // Function to displaying the data of an array
     printf("The elements of array: \n");
     for(int i=0;i<N;i++){
		printf("arr[%d]= %d\t", i,arr[i]);
		} 
}
void revdisplay(int *arr){ //function for reverse displaying the array elements
     int i,j=N-1,temp;
     for(i=0;i<N/2;i++){
     	temp=arr[i];
     	arr[i]=arr[j];
     	arr[j]=temp; 
     	--j;
     }
     printf("The array element after the reversing element: \n");
     for(i=0;i<N;i++){
		printf("arr[%d]= %d\t", i,arr[i]);
	}
}
void search(int *arr){   // function for searching the elements from array 
	int i,ele;
	printf("\nEnter The Element you want to search: ");
	scanf("%d",&ele);
	for(i=0;i<N;i++){
		if(arr[i]==ele){
			printf("The element %d  is found at %d th position.\n", ele,i);
			break;
		}
		else if((arr[i]!=ele) && (i==N-1)){
			printf("The element is not found in the array.\n");
		}
	}
}
void count(int *arr){			//count the number of elements in the array
	int i,cnt=0;
	for(i=0;i<N;i++){
		cnt++;
		}
		printf("\nThe number of elements in given array: %d\n", cnt); 
}

void avg(int *arr){      //Calculate the average salary of all the employee's
	int i,sum=0;
	float average=0;
	for(i=0;i<N;i++){
		sum+= arr[i];
	}
	average=sum/N;
	printf("Average= %0.1f",average);
}
void duplicate(int *arr){
       	printf("Duplicate elements in given array: \n");    
   	//Searches for duplicate element    
    	for(int i = 0; i < N; i++)
    	{    
       		for(int j = i + 1; j < N; j++)
       		{
       			if(arr[i] == arr[j]){
       				//printf("Duplicate elements in given array: \n");
       				printf("%d\n", arr[j]);    
                	}
                	if((arr[i]!= arr[j]) && (j==N)){
                		printf("There is no duplicate elements in given array\n");
                	}
        	}
        }
        
}  

void reverse(int *ptr){
	int i,j=N-1,temp;
    	for(i=0;i<N/2;i++)
    	{
    		temp=ptr[i];
    		ptr[i]=ptr[j];
    		ptr[j]=temp; 
    		--j;
         }
}
void min(int *arr){
     int res = arr[0];             // Function to find minimum in an array
     for (int i = 1; i < N; i++){
          res = getmin(res, arr[i]);
     }
     printf("The minimum value is: %d\n", res);
}
void max(int *arr){           //Find maximum to find maximum of numbers
     int res = arr[0];
     for (int i = 1; i < N; i++){
        res = getmax(res, arr[i]);
     }
     printf("The maximum value is: %d\n", res);
}

// Find maximum between two numbers.
int getmax(int num1, int num2){
    return ((num1 > num2) ? num1 : num2);
}
 
                  // Find minimum between two numbers.
int getmin(int num1, int num2){
    return ((num1 > num2) ? num2 : num1);
}

