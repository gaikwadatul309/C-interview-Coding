// string without token .

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char arr[20],str[20],a[50];
	printf("enter any string with . \n");
	scanf("%[^\n]s",arr);
        int i=0;
	char token[]=".";
	char *n=strtok(arr,token);
	printf("%s\n",n);
	while(arr[i] != '\0')
	{
	char *n2=strtok(NULL,token);
	printf("%s\n",n2);
   	i++;
	}

	return 0;
}

