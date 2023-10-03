/******************************************************************************
 * Author      : Rishi suri & Atul Gaikward              *Date : 26/04/2023
 * Assigment   : Data structures -1                              
 * statement   : Q2- Create an employee structure with the followibg members 
                empid,employee name, salary ,year ofjoining.
                Accepts the data from employees and aslo find out the employees with maximum,minimum
                service for each employee element in the array.
  
*******************************************************************************/




#include<stdio.h>
#include<stdlib.h>


#define N 50
struct employee{
    int empid;          //Employee ID
    char empName[50];    //Employee name
    int salary;       // salary of Employee
    int yearof_join;    // year of joining
};
void add(struct employee emp[]);
void total(struct employee emp[]);
void avg(struct employee emp[]);
void min(struct employee emp[]);
void max(struct employee emp[]);
void maxservice(struct employee emp[]);
void minservice(struct employee emp[]);
int search(struct employee emp[], int*);

int num;

int main(){
    
    struct employee emp[N];
    int ch,sal;
    printf("How many employees data need to be entered: ");
    scanf("%d", &num);
    
    printf("\n****!!! Welcome to the Employee's Portal !!!****");
    printf("\n");
    printf("\n      ***** Please Choose Your Option *****     ");
    printf("\n------------------------------------------------");
    
    while(1){
  	printf("\n1. ADD Employee Data \n2. Total Salary \n3. Average Salary");
   	printf("\n4. Max Salary \n5. Minimum Salary \n6. Max service ");
   	printf("\n7. Min ervice \n8.Exit \n");

   	
   	printf("\nEnter Your Choice: ");
 	scanf("%d",&ch);
        switch(ch){
            case 1: printf("\n----------- Enter Employee Data -----------");
                    add(emp); //in calling we only need structure's name if it was an array
                    break;
            case 2: total(emp); 
                    break;
            case 3: avg(emp); 
                    break;
            case 4: max(emp); 
                    break;
            case 5: min(emp); 
                    break;
            case 6: maxservice(emp); 
                    break;
            case 7: minservice(emp); 
                    break;
            /*case 8: printf("Enter salary to be searched: ");
            	    scanf("%d", &sal);
            	    search(emp,&sal); 
                    break;*/
            case 8: exit (0); 
     
           default:
                    printf("Please enter valid input.!!!");
        }
    }
    return 0;
}
void add(struct employee emp[]){
    int i;
    for(i=0;i<num;i++){
        printf("\nEnter Data of Employee- %d \n",i+1);
        printf("\n-------------------------------\n");
        printf("Enter Employee ID: ");
        scanf("%d",&emp[i].empid);     //for integer we have to give Address
        printf("Enter Employee's Name : ");
        scanf("%s",emp[i].empName);    //for Array we dont need address array name itself reperesents address.
        printf("Enter the Salary: ");
        scanf("%d",&emp[i].salary);
        printf("Enter Year of Joining: ");
        scanf("%d",&emp[i].yearof_join);
	printf("\n");
    }
}
void total(struct employee emp[]){        // function to find the total salaries of all the employee's
	int i, sum=0;
	for(i=0;i<num;i++){
		sum+=emp[i].salary;
	}
	printf("The total salaries of the all employees: %d", sum);
	printf("\n");
}

void avg(struct employee emp[]){    // Avg Function is to calculate the average of all the Employee's salary
	int i, sum=0, average=0;
	for(i=0;i<num;i++){
		sum+=emp[i].salary;
	}
	average=sum/num;
	printf("The average of the all employee's salary: %d", average);
	printf("\n");
}

void max(struct employee emp[]){
	int i,maximum=emp[0].salary;       //Max Function is to calculate the maximum salary of all the employee's
	for(i=1;i<num;i++){
	maximum=maximum>emp[i].salary?maximum:emp[i].salary;
	}
	printf("The maximum salary is: %d", maximum);
	printf("\n");
}
void min(struct employee emp[]){
	int i,minimum=emp[0].salary;
	for(i=1;i<num;i++){               // Function to find the minimum salary
	minimum=minimum<emp[i].salary?minimum:emp[i].salary;
	}
	printf("The maximum salary is: %d", minimum);
	printf("\n");
}

void maxservice(struct employee emp[]){
	int i,j,year,eid,arr[num];      // Function to cout the minimum service that employee done
	printf("Enter reference year to calculate service: ");
	scanf("%d", &year);
	for(i=0;i<num;i++){
		arr[i]= year-emp[i].yearof_join;
		}
	int max=arr[0];
	for(j=1;j<num;j++){
	max= max>arr[j]?max:arr[j];
	}
	printf("The max service is: %d\n", max);
	printf("\n");
}
void minservice(struct employee emp[]){ // Function minservice is to count the minimum service that employee can offer
	int i,j,year,eid,arr[num];
	printf("Enter reference year to calculate service: ");
	scanf("%d", &year);
	for(i=0;i<num;i++){
		arr[i]= year-emp[i].yearof_join;
		}
	int max=arr[0];
	for(j=1;j<num;j++){
		max= max>arr[j]?max:arr[j];
		}
	printf("The min service is: %d\n", max);
	printf("\n");
	
}
