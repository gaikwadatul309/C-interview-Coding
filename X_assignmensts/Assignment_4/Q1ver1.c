/******************************************************************************
*Assignment: 4                                  Date: 20/04/2023
*Program statement:Q1. c program to display & reverse the int array by iteration
*
*******************************************************************************/
#include <stdio.h>
int display(int arr[], int);            //functions declarations
int reversedisplay(int arr[], int);

int main()
{
    int i,num, arr[10];
    printf("Enter how many elements of array: ");
    scanf("%d", &num);
    printf("Enter %d elements of array:\n",num);
    for(i=0;i<num;i++){
        printf("arr[%d]= ",i);
        scanf("%d", &arr[i]);
    }
  
    display(arr,num);               //display function call

    reversedisplay(arr,num);            //reversing array function call
    printf("\n");
    return 0;
}
int display(int arr[],int num){
    int i;
    printf("The elements of array before reverse:\n");
    for(i=0;i<num;i++){
        printf("%d\t", arr[i]);
    }
}

int reversedisplay(int arr[], int num){             //reverse array display function defination
    printf("\nThe elements of array after reverse:\n");
    for(int i=num-1;i!=-1;i--){                           //iterative approach
        printf("%d\t", arr[i]);
    }
}


