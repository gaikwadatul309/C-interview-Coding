// prog to implement the strtok

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char str[]="PG-DESD-March";
       char token[]="-";
  char *new= strtok (str,token);
   printf(" %s\n",new);
 char *new2=strtok(NULL,token);
printf("%s\n ",new2);
return 0;
}
