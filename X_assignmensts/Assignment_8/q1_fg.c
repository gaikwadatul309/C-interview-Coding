// find occurrence of first chara in agiven string 

#include<stdio.h>
#include<string.h>
int firstelement(char arr[20]);
int lastelement(char arr[20]);
int count=0;
int main()
{
	char arr[20];
	int i=0;
	printf("enter a string\n");
	scanf("%s",arr);
	while(arr[i] !='\0')
	{
		count++;
		i++;
	}
	printf("total char in strings are %d\n",count);
        firstelement(arr);
       lastelement(arr);
        return 0;
}



int firstelement(char arr[20])
{

        int c=arr[0];
	int ct=0,i=0;
        while(arr[i] != '\0')
	{
		if(c==arr[i])
		{
			ct++;
		}
	i++;
	}
	printf(" the first element occurs %d times in astring\n",ct);
}

int lastelement(char arr[20])
{

	int m=arr[count-1];
	int ctm=0,i=0;
	while(arr[i] !='\0')
	{
		if(m == arr[i])
		{
			ctm++;
		}
		i++;}
	printf("last letter occurance %d\n",ctm);
}
