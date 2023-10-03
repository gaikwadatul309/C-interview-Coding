/******************************************************************************
*Assignment: 4                                  Date: 20/04/2023
*Program statement:Q2. c program to display & reverse string by recursion
*
*******************************************************************************/
#include<stdio.h>
#include<string.h>
void display(char [],int);      //functions declarations
void reversestr(char [],int);
int main()
{
    char str[100];
    printf("Enter a string without space: ");
    scanf("%s",str);
    
    int len=strlen(str);
    printf("The size of string is: %d\n", len);
    
    printf("Entered string is:\n");
    display(str,0);
    printf("\nReversed string is:\n");
    reversestr(str,len);       //function call to displays reverse from size of len index in array
    return 0;
}

void display(char a[],int i){           //displaying entered string
    if (a[i]!='\0'){
        printf("%c",a[i]);
        display(a,++i);
    }
}

void reversestr(char a[],int index){        //reverse display function defination
    if (index>=0){
        printf("%c",a[index]);
        reversestr(a,--index);          //recursive function call
    }
}
