
#include<stdio.h>
int main(){

	int a,b,c,d1,d2;

	printf("Enter your number in a: ");
	scanf("%d",&a);
	printf("Enter your number in b: ");
	scanf("%d",&b);
	printf("Enter your number in c: ");
	scanf("%d",&c);
          
        d1=++a,++b,++c,a+5;		// comma operator here the value of the a is assigned to d1
        printf("d1 =%d\n", d1);
        
        d2=(++a,++b,++c,a+5);         //here the first the value of the a variable increased then added with 5
        printf("d2 =%d\n",d2);
       
}
