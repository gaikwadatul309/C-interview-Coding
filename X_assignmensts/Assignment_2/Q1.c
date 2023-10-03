
//Arithmetic calculator By using Switch Statement and Fucnctions

#include<stdio.h>
float add(float, float);    //Function Declarations
float sub(float, float);    //Function Declarations
float mul(float, float);    //Function Declarations
float div(float, float);    //Function Declarations
int main()
{
	float  fnum,snum;
	int sel;
	printf("Hello Rishi and Atul!!!\n");
	printf("Enter Your First number: ");
	scanf("%f",&fnum);
	printf("Enter your second Number: ");
	scanf("%f",&snum);
	printf("Please Enter Which Arithmetic Operation You want to do:\n");
	printf("1. Addition			2. Subtraction\n3. Multiplication		4. Division \n");
	scanf("%d",&sel);
	switch(sel){

		case 1:{
			       printf("Addition of Two numbers is: %0.1f\n",add(fnum, snum));      // function call for addtion
			       break;
		       }
		case 2:{
			       printf("Subtraction of Two numbers is: %0.1f\n",sub( fnum, snum));	//function call for subtraction
			       break;
		       
		       }
		case 3:{
			       printf("Multiplication of Two numbers is: %0.1f\n",mul( fnum, snum));	//function call for multiplication
			       break;
		       
		       }
		case 4:{
			       printf("Divide of two numbers is: %0.1f\n",div( fnum, snum)); 	//function call for division
			       break;
		       
		       }
		 default :{
				  printf("!!!!! You have not Select any Option !!!! Please Retry !!!!!\n");
			  
			  }
	}
	return 0;
}


float  add(float p,float q)
{
	float sum=0;

	sum=p+q;

	return sum;


}

float sub(float p,float q)
{
	float subtract=0;

	subtract=p-q;
	return subtract;

}

float mul(float p,float q)
{
	float multi=0;
	multi=p*q;
	return multi; 

}
float div(float p, float q)
{
	float divi=0;
	 divi=p/q;
	return divi;
}
