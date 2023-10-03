/******************************************************************************
 * Author: Atul Gaikwad and Rishi Suri
 * Assigment : 8                                 * Date: 22/04/2023
 * Program statement: Q1(a,b). c program for finding length, copying using arr by iterative fun
*******************************************************************************/
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int count=0;
int len(char*name, char*s2);
int copy(char *name,char*s2);

int main()
{
   char name[20];
   char s2[20]="cdac_acts";
   printf("Enter first string: ");
   scanf("%[^\n]s",name);
   len(name,s2);
   copy(name,s2);
   return 0;
}

int len (char*name, char*s2){       // function to count the length
	int i=0;
	while(name[i]!='\0'){
		count++;
	    i++;
	}
    printf("The length of 1st string: %d\n",count);
	int j=0, ct=0;
    while(s2[j]!='\0'){
		ct++;
	    j++;
	}
    printf("The length of 2nd string: %d\n",ct);
}

int copy(char *name,char*s2)    // function to copy one string into other
{
	int i=0;
	while(name[i]!='\0'){
		s2[i]= name[i];
		++i;
	}
	s2[i]='\0';
	printf("String 1 is copied to string 2 = %s\n",s2);
}
