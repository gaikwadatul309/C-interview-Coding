/******************************************************************************
*Assignment: 5                                     Date: 21/04/2023
*Program statement:Q1. c program to search an element in array & print
*
*******************************************************************************/
#include<stdio.h>
int search(int [],int,int);            //functions declarations
void display(int [],int);
int main()
{
    int i=0,num,n1,index, arr[20];
    printf("Enter how many elements of array: ");   //enter no of elements
    scanf("%d", &num);
    printf("Enter %d elements of array:\n",num);
    for(i=0;i<num;i++){
        printf("arr[%d]= ",i);
        scanf("%d", &arr[i]);
    }
    display(arr,num);         //function call to display element
    printf("\n");
    printf("Enter a number you want to search: ");
    scanf("%d", &n1);
    index=search(arr,num,n1);           //function call for searching element
    if(index==-1){
         printf("%d is not found in array\n", n1);
    }
    else
          printf("%d is found at %d th location\n",n1, index);
    return 0;
}
void display(int arr[],int num){      //display the array
    int j=0;
    printf("The elements of array: ");
    for(j=0;j<num;j++){
        printf("%d\t", arr[j]);
    }
}
int search(int arr[],int q, int p){          //function defination for searching element in std::array<T, N> ;
     int i=0;       
     while(i<q && p!=arr[i])                 // iterate untill the element not found
          i++;
     if(i<q){
          return i;
     }
     else
          return -1;
}