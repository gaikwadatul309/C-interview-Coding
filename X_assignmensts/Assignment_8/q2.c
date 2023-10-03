#include<stdio.h>
#include<string.h>
int main()
{
	char str1[50];
	int year=2023;
	char str[20]="PG-DESD";
 sprintf(str1, "%s""%d",str,year);     // concat using sprintf
 printf("the str2is %s\n",str1);
 int len=sprintf(str1, "%s""%d",str,year);     // find len  using sprintf
 printf("the length of concat str is%d\n",len);
 sprintf(str1,"%s",str);
 printf("the copied string is %s\n",str1);    //copying the string
 return 0;
}
	
              
