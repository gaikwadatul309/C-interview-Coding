/******************************************************************************
 * Author: Atul Gaikwad and Rishi Suri
 * Assigment : 9A                                * Date: 22/04/2023
 * Program statement: Q7. c program to Using function calls, create a structre variable in 
							one function and return the strucutre variable
*******************************************************************************/
#include<stdio.h>
#include<string.h>
struct student{
	char name[50];
	int rollno;
	float marks;
};
struct student fun(struct student stu){
	strcpy(stu.name,"DESD");
	stu.rollno=23;
	stu.marks=57;
	return stu;
}
int main(){
	struct student stu1;
	stu1=fun(stu1);
	printf("Name:%s\n rollno:%d\n Marks:%f\n",stu1.name,stu1.rollno,stu1.marks);
	return 0;
}
