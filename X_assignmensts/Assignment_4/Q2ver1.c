/******************************************************************************
*Assignment: 4                                   Date: 20/04/2023
*Program statement:Q2. c program to display  & reverse the string by iteration
*
*******************************************************************************/
#include <stdio.h>
#include<string.h>
char display(char str[]);
char reversedisplay(char str[], int);

char main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s",str);
    
     int len=strlen(str);
     printf("%d\n", len);
     
    display(str);
    
    reversedisplay(str,len);            //function call to displays reverse from size of len index in array
    return 0;
}

char display(char str[]){
        printf("%s\t", str);            //displaying entered string
}

char reversedisplay(char str[], int len){     //reverse display function defination
    char rev,c;
    char *p;
    p=(char *)&str;
    printf("\nReversed string is:");
    for(int i=len;i!=(-1);i--){
        rev=str[i];                 //assign variable to swap string
        c=rev;
    printf("%c",c);   
    }
}


