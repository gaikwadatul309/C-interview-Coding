/***************************************************************************************
*Author: Atul Gaikwad                               Date: 21/04/2023
*Assignment: 4
*Program statement:Q7. c program to convert a decimal to binary,octal,hexa by iteration
*
****************************************************************************************/

#include <stdio.h>
int binary(int);            //functions declarations
int octal(int);
int hexa(int);

int main(){
	int num;
	printf("Enter any positive decimal number: ");
	scanf("%d", &num);
	
	printf("\n1. Binary conversion:: ");
	binary(num);                        //function call
	printf("\n2. Octal conversion:: ");
	octal(num);                         //function call
	printf("\n3. Hexadecimal conversion:: ");   
	hexa(num);                          //function call
	return 0;
}

int binary(int num){            //conversion decimal to binary
    int rem,i=1,b=0;
	while(num!=0){
	    rem=num%2;          //getting reminder
    	num=num/2;          //value of num modified 
    	b=b+(rem*i);
    	i=i*10;
	}
	printf("%d",b);
    return 0;
}
int octal(int num){         //conversion of decimal to octal
	int rem,i=1,o=0;
	while(num!=0){
	    rem=num%8;           //getting reminder
    	num=num/8;          //value of num modified 
	    o=o+(rem*i);
	    i=i*10;
	}
	printf("%d",o);
    return 0;
}
int hexa(int num){              //conversion decimal to hexa
	int rem,i=1,h=0;
	while(num!=0){
	    rem=num%16;           //getting reminder
    	num=num/16;          //value of num modified 
    	h=h+(rem*i);
    	i=i*10;
	}
	printf("%d",h);
    return 0;
}

