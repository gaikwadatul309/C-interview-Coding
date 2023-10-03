/******************************************************************************
 * Author: Atul Gaikwad and Rishi Suri
 * Assigment : 8                                 * Date: 22/04/2023
 * Program statement: Q1(e,f). c program for finding finding len,concat,compare using array
*******************************************************************************/
#include<stdio.h>
#include<string.h>
int  len(char str[20]);
int  rev(char str[20]);
int count=0;
int main()
{
	char str[20],temp;
       
	printf("enter the string want to reverse\n");
	scanf("%[^\n]s",str);
        len(str);
	rev(str);
	return 0;
}
int len(char str[20])
{
	int i=0;
	while(str[i]!='\0')
	{ 
		count++;
		i++;
	}
printf("your string is of %d length\n",count);
}

int rev(char str[20])
{ 
	int ct=count;
	char temp;
//	int *p;
//	p=(int *)&str;
	for(int i=0,j=ct;i<j-1;i++,j--)
	{
	printf("%c",str[i]);	
        temp=str[i];
	str[i]=str[j];
	str[j]=temp;
       }	
	
}

           		
		
