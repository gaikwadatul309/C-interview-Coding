// program to covert digit string to int 

#include<stdio.h>
int main(){
	char str1[10]="1348";
	int x;
	sscanf(str1,"%d",&x);              //fun read the data from string and conveted into the int
	printf("value of x=%d",x);
        int x1=546;
	char str2[10];
	sprintf(str2,"%d",x1); 
	printf(" the string =%s",str2);

	return 0;
}

