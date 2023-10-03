#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<string.h>
#include<stdio_ext.h>

#define MAX 20

struct employee{		//STRUCTURE DECLARATION
	int empid;
	char empName[20];
	long int salary;
	int yearofjoin;
	char empPost[20];
	char gender[2];
	int age;
	long int aadhar;
}emp[MAX];

int selection();					//FUNCTION DECLARATIONS
int duplicate(int);
void emp_add_details(struct employee emp[]);
void emp_delete_details(struct employee emp[], int);
void emp_modify_details(struct employee emp[], int);
void emp_display_details(struct employee emp[]);
void emp_service_period(struct employee emp[], int);
void emp_min_salary(struct employee emp[]);
void emp_max_salary(struct employee emp[]);

u_int8_t i;

int main(){
	int choice, id, year;

	while(1){
		choice = selection();

		switch(choice){
			case 1:	emp_add_details(emp);				
				break;

			case 2: printf("---------------:THE DETAILS OF THE EMPLOYEES: ----------\n");
				emp_display_details(emp);
				break;

			case 3: printf("Please enter employee id of which details to be modify: ");
				scanf("%d", &id);
				emp_modify_details(emp, id);
				break;

			case 4: printf("Enter the employee id want to delete from database: ");
				scanf("%d", &id);
				emp_delete_details(emp, id);
				break;

			case 5: emp_min_salary(emp);
				break;

			case 6: emp_max_salary(emp);
				break;

			case 7: printf("Enter employee id for whom want to check service period: ");
				scanf("%d", &id);
				emp_service_period(emp, id);
				break;

			case 8: printf("Exiting !!!\n");
				exit(0);
				break;

			default: printf("Please enter valid choice ..!!!\n");


		}  //END OF SWITCH
	}  //END OF WHILE
	return 0;
}  //END OF MAIN
   
void emp_min_salary(struct employee emp[]){
	int j,minimum = emp[0].salary;
	for(j=0;j<i;j++)
	{
		if(minimum > emp[j].salary)
		{
			minimum = emp[j].salary;
		}
	}
	printf("Minimum Salary is getting by %d employee is: %d\n",emp[j].empid, minimum);
}

void emp_max_salary(struct employee emp[]){
	int j, maximum = emp[0].salary;
	for(j=0;j<i;j++)
	{
		if(maximum < emp[j].salary)
		{
			maximum = emp[j].salary;
		}
	}
	printf("Maximum Salary is getting by %d employee is: %d\n",emp[j].empid, maximum);
}

/*CHECKING THE SERIVICE PERIOD OF THE EMPLOYEE FROM THE DATE OF JOINING*/

void emp_service_period(struct employee emp[], int id){
	int i, year, service;
	printf("Enter current year: ");
	scanf("%d", &year);
	for( i=0; i<MAX;i++)
	{
		if( id == emp[i].empid)
		{
			service = year - emp[i].yearofjoin;
		}
	}
	printf("The total service period of %d Employee is = %d\n",emp[i].empid, service);
}

/* DELETING THE DATA OF THE EMPLOYEE IN CASE THE EMPLOYEE IS RESIGNED */

void emp_delete_details(struct employee emp[], int id){
	int pos, found;
	for(int i = 0; i < MAX; i++)
	{
		if(id == emp[i].empid)
		{
			found = 1;
			pos = i;
			break;	
		}
	}
	if(found == 1)
	{
		for(int j = pos; j < MAX; j++)
		{
			emp[j].empName[20] = emp[j+1].empName[20];
			emp[j].empid = emp[j+1].empid;
			emp[j].empPost[20] = emp[j+1].empPost[20];
			emp[j].gender[2] = emp[j+1].gender[2];
			emp[j].salary = emp[j+1].salary;
			emp[j].age = emp[j+1].age;
			emp[j].yearofjoin = emp[j+1].yearofjoin;
		}
	}
	else{
		printf("Element %d is not found in the database..!!\n", id);
	}
}

/* MODIFYING DATA OF EMPLOYEE IN CASE EMPLOYEE GET PROMOTED*/

void emp_modify_details(struct employee emp[], int id){
	for(int i = 0; i < 20; i++)
	{
		if(id == emp[i].empid)
		{
			printf("Enter the employee name: ");
			__fpurge(stdin);
			scanf("%[^\n]s", emp[i].empName);
			
			printf("Enter the post: ");
			__fpurge(stdin);
			scanf("%[^\n]s", emp[i].empPost);
			
			printf("Enter year of joining: ");
			scanf("%d", &emp[i].yearofjoin);

			printf("Enter Gender (M/F/T): ");
			__fpurge(stdin);
			scanf("%c", emp[i].gender);

			printf("Enter salary: ");
			scanf("%ld", &emp[i].salary);
			
			printf("Enter the age: ");
			scanf("%d", &emp[i].age);
		}
	}
}

void emp_display_details(struct employee emp[]){
//	printf("|       |	|		|		|	|	|		|		|		|");
	printf("|SR.NO  |EMP ID |   EMP NAME    |  DESIGNATION  |GENDER | AGE   | YEAR OF JOIN  |  ID Proof     |    SALARY     |\n");
	for(int j = 0; j <i ; j++)
	{
		printf("   %d      %d       %s           %s 	",(j+1),emp[j].empid, emp[j].empName,emp[j].empPost);
		printf("   %c	   %d         %d	",emp[j].gender[0], emp[j].age, emp[j].yearofjoin);
		printf("   %ld       %ld ", emp[j].aadhar, emp[j].salary);
		printf("\n");
		
	}
	printf("\n");
}

/*ADD DETAILS OF NEW JOINED EMPLOYEE TO THE ORGANISATION */

void emp_add_details(struct employee emp[]){
	if(i<MAX){
		int id,dup;
	    	printf("Enter employee id: ");
		scanf("%d", &id);
		dup = duplicate(id);
		if(dup == 0)
		{
			printf("Enter the details of the Employee  : %d:-\n", i+1);
			printf("-------------------------------------------\n");
			emp[i].empid = id;
			
			printf("Enter the employee name: ");
			__fpurge(stdin);
			scanf("%[^\n]s", emp[i].empName);
			
			printf("Enter the post: ");
			__fpurge(stdin);
			scanf("%[^\n]s", emp[i].empPost);
			
			printf("Enter year of joining: ");
			scanf("%d", &emp[i].yearofjoin);
			
			printf("Enter salary: ");
			scanf("%ld", &emp[i].salary);
			
			printf("Enter Gender (M/F): ");
			__fpurge(stdin);
			scanf("%c", emp[i].gender);

			printf("Enter the age: ");
			scanf("%d", &emp[i].age);
			
			printf("Enter aadhar number: ");
			scanf("%ld", &emp[i].aadhar);
	
			printf("-------------------------------------------\n");
			i++;
		}
	}
	else{
		printf("\nThe Array size is full\n");
	}
	
}

/* CHECKING FOR AVOIDING ANY DUPLICATE ENTRIES*/

int duplicate(int id){
	for(int j=0; j<i;j++)
	{
		if(id == emp[j].empid)
		{
			printf("The entered employee id is already present !!!!\nPlease enter new employee id.\n");
			return -1;
		}
	}
	return 0;
}

int selection(){
	int ch;
	printf("=============== WELCOME TO EMPLOYEE FORUM ====================\n");
	printf("1. Add Employee Deatails       2. Display All Emplyee Details \n");
	printf("3. Modify Employee Deatails    4. Delete Emplyee Details \n");
	printf("5. Min Salary                  6. Max Salary \n");
	printf("7. Total Service of employee   8. Exit \n");

	printf("Enter a choice: ");
	scanf("%d", &ch);
	return ch;
}


