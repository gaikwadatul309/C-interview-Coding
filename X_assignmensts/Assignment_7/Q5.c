/******************************************************************************
 * Author: Atul Gaikwad and Rishi Suri
 * Assigment : 7                                 * Date: 22/04/2023
 * Program statement: Q5. c program single function returns the sum and product 
*******************************************************************************/
#include<stdio.h>

int op(int *num1,int *num2, int a[2]);
int main(){
     int num1,num2,a[2];
     printf("Enter any 2 elements: \n");
     scanf("%d %d",&num1,&num2);
     op(&num1,&num2,a);
     for(int i=0;i<2;i++){
          if(i==0){
               printf("Addition = %d\n", a[i]);
          }else {
               printf("Multiplication=%d", a[i]);
          }
          //printf("%d\n",a[i]);
     }
     return 0;
}

int op(int *num1, int *num2,int a[2]){
     int sum, pro; 
     sum = (*num1) + (*num2);
     pro = (*num1) * (*num2);
     a[0]=sum;
     a[1]=pro;	
     return a[2];
}
	