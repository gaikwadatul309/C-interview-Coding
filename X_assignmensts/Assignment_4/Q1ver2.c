/******************************************************************************
*Assignment: 4                                  Date: 20/04/2023
*Program statement:Q1. c program to display & reverse the int array by recursion
*
*******************************************************************************/
#include<stdio.h>
void reversedisplay(int [],int);            //functions declarations
void display(int [],int,int);
int main()
{
    int i=0,num, arr[50];
    printf("Enter how many elements of array: ");   //enter no of elements
    scanf("%d", &num);
    printf("Enter %d elements of array:\n",num);
    for(i=0;i<num;i++){
        printf("arr[%d]= ",i);
        scanf("%d", &arr[i]);
    }
    
    display(arr,0,num);         //function call
    printf("\n");
    reversedisplay(arr,num-1);  //reversedisplay function call  
    printf("\n");
    return 0;
}

void display(int a[],int i,int index){
    if(i<index)
    {
        printf("%d ",a[i]);
        i++;
        display(a,i,index);         //recursive function call to display array elements 
    }    
}

void reversedisplay(int a[],int index){         //reverse display function defination
    if(index>=0)
    {
        printf("%d ",a[index]);
        reversedisplay(a,--index);      //recursive function call for reverse display
    }    
}

