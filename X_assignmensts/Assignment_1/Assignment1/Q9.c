#include<stdio.h>
int main()
{
// Program to Do Pattern printing
	int i,j,num;
	printf("Enter any Number: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
	      for(j=1;j<=num;j++)
	      {
	       
	         if(i+j<=num)
	         {
	                printf(" ");
	         }
	         else 
	         {
	              printf("%d",i);
	          
	         }
	        
	      }
	      printf("\n");
	}
	return 0;
}
