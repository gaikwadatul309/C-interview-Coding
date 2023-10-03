// C Program to find out given year is LEap or not.
#include<stdio.h>
int main(){
	int year;
	printf("Enter any year: ");
	scanf("%d", &year);
	if((year%400==0)&&(year%100!=0))
	{ printf("This year is leap year");
	}
	else if (year%4==0)
	{ printf("This year is leap year");
	}
	else {
	printf("This is not leap year");
	}

}
