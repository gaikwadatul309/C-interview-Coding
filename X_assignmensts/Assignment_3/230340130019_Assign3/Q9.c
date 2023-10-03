/*
 * Authour: Rishi Suri and Atul Gaikwad
 * Program:  C program for number conversions (decimal, binary, octal, hexadecimal).
*/
 
#include <stdio.h>
int binary(){
	int n,r,i=1;
	int b=0;
	printf("enter number wanna to convert in to binary");
	scanf("%d",&n); //Decimal to Binary
	while(n!=0){
	r=n%2;
	n=n/2;
	b=b+(r*i);
	i=i*10;
	}
	printf("%d",b);
return 0;
}
int octal(){
	int n,r,i=1;
	int o=0;
	printf("enter number wanna to convert in to octal"); //Decimal to octal
	scanf("%d",&n);
	while(n!=0){
	r=n%8;
	n=n/8;
	o=o+(r*i);
	i=i*10;
	}
	printf("%d",o);
return 0;
}
int hexa(){
	int n,r,i=1;
	int h=0;
	printf("enter number wanna to convert in to hexa"); //Decimal to Hexadecimal
	scanf("%d",&n);
	while(n!=0){
	r=n%2;
	n=n/2;
	h=h+(r*i);
	i=i*10;
	}


/*	
int temp=h;
int x=0;
while(z!=0){
	int a;
	int count=0;
	for(int i=0;(i<=0 && count<=3;i++){
		a=temp%10;
		temp=temp/10;
		if(count==1){
			b=a*1;
			x=x+b;
		}else if(){
			b=a*2;
			x=x+b;
			
		}
		else if(){
			b=a*4;
			x=x+b;

		}else if(){
			b=a*8;
			x=x+b;

		}
		
		
	}
}

*/


return 0;
}




int main(){
	int x;
	printf("for convert in to binary enter 1\n");
	printf("for convert in to octal enter 2\n");
	printf("for convert in to hexa enter 3\n");
	scanf("%d",&x);

	if(x==1){
	binary();
	}else if(x==2){
	octal();
	}else if(x==3){
	hexa();
	}	
	return 0;

}
