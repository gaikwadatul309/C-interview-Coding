
//Income tax caluculator by considering best possible parameters(Gender, Senior citizen benefits, exemtion for investment and other possible consideration). Using If_else Ladder logic

#include<stdio.h>
float TAX(float);  //function declaration

int main()
{
	float  salary=0,income_tax=0,concession=0;
	int sel;
	printf("Hello user Welcome to Income Tax Calculator !!!\n");
	printf("Please Enter user type :\n");
	printf("1. Male \t2. Female \t3. Senior Citizen\n");			//selection of user 
	scanf("%d", &sel);
	printf("Please Enter Your Salary: ");
	scanf("%f",&salary);
	switch (sel)
	{
		case 1: 
		{
		    concession=TAX(salary);					//function call for salary			
		    printf("Your Income Tax will be: %0.2f\n",concession);
		    break;
		    
		}
		case 2:
		{
		     concession=  TAX(salary)-(TAX(salary)*10)/100;		//function call for salary	
		     printf("Your Income Tax  will be: %0.2f\n",concession);
		     break;
		     
		}
		case 3:
		{
			concession=  TAX(salary)-(TAX(salary)*50)/100;	//function call for salary	
			printf("Your Income Tax  will be: %0.2f\n",concession);
			break;
			
		}

		default:
		{ printf("You hav entered invalid number\n");
		}
	}
	return 0;
}		
	
float TAX(float salary)					//TAX function 
{
       float income_tax;

        if(salary>0 && salary<=250000)
	{
		printf("Congratulations !!! You exempted from income tax Deduction  \n Have a Nice Day !!!\n");
			
	}
	else if(salary>250000 && salary<=500000)
	{
	               
	         income_tax=(salary*5)/100;
	         
	} 
	else if(salary>500000 && salary<=750000)
	{
	               
	         income_tax=(salary*10)/100;
	        
	} else if(salary>750000 && salary<=1000000)
	{
	               
	         income_tax=(salary*15)/100;
	         
	} else if(salary>1000000 && salary<=1500000)
	{
	               
	         income_tax=(salary*20)/100;
	         
	} else if(salary>1500000){
	               
	         income_tax=(salary*30)/100;
	         
	}
	
	return income_tax;					//returning the TAX output


}
