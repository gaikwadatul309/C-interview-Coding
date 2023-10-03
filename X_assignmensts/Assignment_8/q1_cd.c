/******************************************************************************
 * Author: Atul Gaikwad and Rishi Suri
 * Assigment : 8                                 * Date: 22/04/2023
 * Program statement: Q1(c,d). c program for finding finding len,concat,compare using array
*******************************************************************************/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int count=0;
int len(char*name);
int con(char *name, char*s2);
int comp(char *name,char*s2);

int main(){
	char name[20],s2[20];
	printf("enter first string \n");
	fgets(name,20,stdin);
	printf("enter second  string \n");
	fgets(s2,20,stdin);
	len(name);
	con(name,s2);
	comp(n}ame,s2);

	return 0;
}
int len(char*name){   //function to find the length so as to concat the string from last count number
	int i=0;
	while(name[i]!='\0'){
		count++;
		i++;
		}
    printf("the len of 1st string  %d\n",count-1);
}

int con(char *name,char *s2){       // function to concat the string
	int j=0;
	while(s2[j]!='\0'){
		name[count-1]=s2[j];
		++count;
		++j;
	}
	name[count-1]='\0';
        printf("the concatenation string is %s\n",name);
}

int comp(char *name,char*s2){      // function to compare the string
	for(int i=0;name[i]==s2[i];i++)
        if(name[i]=='\0')
			printf("the string is same\n");
		int i=0;
		if(name[i]!= s2[i])
			printf("the string is different");
}

