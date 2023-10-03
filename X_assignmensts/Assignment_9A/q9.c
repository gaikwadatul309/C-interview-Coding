/******************************************************************************
 * Author: Atul Gaikwad and Rishi Suri
 * Assigment : 9A                                * Date: 22/04/2023
 * Program statement: Q9. c program to print data of n number of student (based on user input)
*******************************************************************************/
#include<stdio.h>
#include<string.h>

struct data{
        char name[10];
        int age;
        char city[10];
};
int main(){
        int m;
        printf("Enter the number of members:\n" );
        scanf("%d",&m);
		struct data d[m];
        for(int i=0;i<m;i++){
            printf("enter the data :\n");
            scanf("%s%d%s",d[i].name,&d[i].age,d[i].city); //scan the info 
        }
        for(int i=0;i<m;i++){
			printf("your name is %s\n",d[i].name); // printf the following input
			printf("your age is %d\n",d[i].age);
			printf("your city is %s\n",d[i].city);
        }
        return 0;
}


~                                     
