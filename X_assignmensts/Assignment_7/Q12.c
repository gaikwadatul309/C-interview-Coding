// 
/******************************************************************************
 * Author: Atul Gaikwad and Rishi Suri
 * Assigment : 7                                 * Date: 22/04/2023
 * Program statement: Q12. c program for passing function name as parameter
*******************************************************************************/
#include<stdio.h>
int fp(int,int);
void test1(int x, int y, int z);

int main(){
     int x=10,y=20;
     int z=fp(x, y);
     printf("%d\n",z);
     test1(x, y, z);
     
     return 0;
}
int (fp)(int p, int q)
{
     int s=0;
     s=p+q;
     return s;
}

void test1(int x ,int y,int m){
     int sum=0;
     sum=x+y;
     if(sum==(m)){
          printf("sum is same: %d\n",sum);
     }
     else
         printf("the sum is not equal\n");
}

