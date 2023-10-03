#include<stdio.h>
int main(){

	float Total_marks=800;
	int obtained_marks;
	double percent;
	
	int n1,n2,n3,n4,n5,n6,n7,n8;
	
	printf("!! Welcome to the Grading System !! \nPlease Enter Your marks Subject wise\n");

	printf("1.Marathi: ");
	scanf("%d\n",&n1);
	printf("2.ENGLISH: ");
	scanf("%d\n",&n2);
	printf("3.MATH: ");
	scanf("%d\n",&n3);
	printf("4.Science: ");
	scanf("%d\n",&n4);
	printf("5.History: ");
	scanf("%d\n",&n5);
	printf("6.Geography:");
	scanf("%d\n",&n6);
	printf("7.Computer: ");
	scanf("%d\n",&n7);
	printf("8.Environment Studies:");
	scanf("%d\n",&n8);
	
	obtained_marks=n1+n2+n3+n4+n5+n6+n7+n8;
	
	printf("Your Obtained Marks could be:%d\n",obtained_marks);
	percent=((obtained_marks/Total_marks)*100);
	//printf("Your Percentage is: %0.2f\n",percent);
	printf("Your Percentage is: %lf\n",percent);
	
	if(percent<=40)
	{
	    printf("!!!! Fail !!!!\n");
	}

	else if(percent>40 && percent<=50)
	{
	    printf("!!!! PASS CLASS !!!!\n");
	}
	else if(percent>50 && percent<=55)
       {
	    printf("!!!! Second Class !!!!\n");
	}	
       else if(percent>55 && percent<=60)
       {
	    printf("!!!! Highner Second Class !!!!\n");
	}
 	else if(percent>60 && percent<=70)
 	{
	    printf("!!!! First Class !!!!\n");
	}
	else if(percent>70 && percent<=80)
	{
	    printf("!!!! First Class with Distinction !!!!\n");
	}
	else
	{
	    printf("!!!! Outstanding !!!!\n");
	}
return 0;


}
