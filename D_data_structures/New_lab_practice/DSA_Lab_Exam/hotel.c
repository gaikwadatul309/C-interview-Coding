// HOTEL RECORD USING LINKED LIST..

#include<stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>

struct hotel{
	char name[30];
	unsigned int id;
	float time;                         	//Time is in 24-hour format..
	struct date{
		unsigned int dd;
		unsigned int mm;
		unsigned int yy;
	}*doe;
	struct hotel *next;
};

unsigned int count=0;

struct hotel *head;

void check(struct hotel*);
void insert();
void disp();
int  dupli(struct hotel *);
void search();
void del_customer();
void modify();
void del_all();

int main()
{
	int ch;
	while(1){
		printf("\n\t=================================================\n");
		printf("\nEnter choice->\n");
		printf("1->Insert\t2->Display\t3->Search\t4->Delete a customer\t5->Modify\t6->Exit\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				insert();
				break;
			case 2:
				disp();
				break;
			case 3:
				search();
				break;
			case 4:
				del_customer();
				break;
			case 5:
				modify();
				break;
			case 6:
				del_all();
				exit(0);
				break;
			default:
				printf("*******\tEnter correct value\n*******");
		}
	}
	return 0;
}

void check(struct hotel *ptr)
{
	if(ptr = NULL){

		printf("Memory allocation failed\n");
		exit(0);
	}
	else{
		printf("\n\t******Memory allocated successfully******\n\n");
	}
}

void insert()
{
	struct hotel *t1,*temp;
	int x = 0;
	temp=(struct hotel*)malloc(sizeof(struct hotel));
	temp->doe = (struct date *)malloc(sizeof(struct date));
	__fpurge(stdin);
	printf("Enter customer name-->");
	scanf("%[^\n]s",temp->name);
	printf("Enter Id->");
	scanf("%d",&temp->id);
	printf("Enter time of entrance in 24-hour format->");
	scanf("%f",&temp->time);
	temp->next = NULL;
	x = dupli(temp);
	if(x == 0){
		free(temp->doe);
		free(temp);
		return ;
	}
	
	if(temp->time >=25){
		printf("Incorrect value of time added\n");
		free(temp->doe);
		free(temp);
		return;
	}
	printf("Enter date of entrance->");
	scanf("%d",&(temp->doe->dd));
	printf("Enter month of entrance->");
	scanf("%d",&(temp->doe->mm));
	if(temp->doe->mm > 12)
	{
		printf("Invalid entry for month\n");
		free(temp->doe);
		free(temp);
		return;
	}
	printf("Enter year of entrance->");
	scanf("%d",&(temp->doe->yy));
	temp->next=NULL;
	
	if(head == NULL){
		head=temp;
		count++;
	}
	else if(head->time > temp->time){
		t1=head;
		temp->next = t1;
		head=temp;
		count++;
	}
	else if(head->time < temp->time){
		t1 = head;
		while(t1->next != NULL && t1->next->time < t1->time){
			t1=t1->next;
		}
		temp->next = t1->next;
		t1->next = temp;
		count++;
	}
	else{
		t1 = head;
		while(t1->next != NULL && t1->time < temp->time){
			t1 = t1->next;
		}
		temp->next = t1->next;
		t1->next=temp;
		count++;
	}
	printf("The number of nodes-->%d\n",count);
}

int dupli(struct hotel *t2)
{
	struct hotel *t1;
	if(head == NULL){
		printf("Nothing to compare\n");
	}
	else{
		t1=head;
		while(t1 != NULL && t1->time != t2->time){
			t1=t1->next;
			if(t1 == NULL){
				printf("No matching enteries\n");
				return 1;
			}
		}
		
		printf("\n\t\t*****Customer at same time entered already exist*****\n");
		printf("\n\tCustomer name->%s\n",t1->name);
		printf("\tCustomer id->%d\n",t1->id);
		printf("\tCustomer time of entry->%.2f\n",t1->time);
		printf("\tCustomer date of entry->%d-%d-%d\n",t1->doe->dd,t1->doe->mm,t1->doe->yy);
		return 0;		
	}
}

void disp()
{
	struct hotel *t1;
	if(head == NULL){
		printf("\n\t\t****No nodes to print\n****");
		return;
	}
	else{
		t1=head;
		while(t1 != NULL){
			printf("\n\tCustomer name->%s\n",t1->name);
			printf("\tCustomer id->%d\n",t1->id);
			printf("\tCustomer time of entry->%.2f\n",t1->time);
			printf("\tCustomer date of entry->%d-%d-%d\n",t1->doe->dd,t1->doe->mm,t1->doe->yy);
			t1=t1->next;
		}
	}
	printf("\tThe nmber of nodes-->%d\n",count);
}

void search()
{
	unsigned int num=0;
	float x = 0;
	struct hotel *t1;
	if(t1 == NULL){
		printf("\n\t*****No nodes to search from*****\n");
		return;
	}
	else{
		t1=head;
		printf("Enter time of enterance of customer in 24 hour format->");
		scanf("%f",&x);
		if(x >= 25){
			printf("You entered invalid time\n");
			return;
		}
		else{
			while(t1 != NULL && t1->time != x){
				t1=t1->next;
				if(t1 == NULL){
					printf("\n\n\tNo enteries at mentioned time\n");
					return;
				}
			}
			printf("\n\t******Record of customer at mentioned time******\n");
			printf("\n\tCustomer name->%s\n",t1->name);
			printf("\tCustomer ID-->%d\n",t1->id);
			printf("\tCustomer time-->%.2f\n",t1->time);
			printf("\tCustomer date-->%d - %d - %d\n",t1->doe->dd,t1->doe->mm,t1->doe->yy);
		}
	}
}

void del_customer()
{
	struct hotel *t1,*t2;
	float time = 0;
	if(head == NULL && count == 0){
		printf("No nodes to delete\n");
		return;
	}
	else{
		t1=head;
		printf("Enter time of customer whose data you want to delete in 2 hour format->");
		scanf("%f",&time);
		if(time > 24){
			printf("\n\t****Invalid time entry****\n");
			return;
		}

		if(head !=NULL && head->time == time){
			head=head->next;
			free(t1);
			count--;
			printf("\n\t***Customer info deleted successfully****\n");
			printf("\n\t***The number of remaining customers-->%d***\n",count);
			return;
		}
		else{
			while(t1 != NULL && t1->time != time){
				t2=t1;
				t1=t1->next;
				if(t1 == NULL){
					printf("\n\t*****No matching entries*****\n");
					return;
				}
			}
			t2->next = t1->next;
			free(t1);
			count--;
		}
	}
	printf("\n\t***Customer info deleted successfully****\n");
	printf("\n\t***The number of remaining customers-->%d***\n",count);
}
void del_all()
{
	struct hotel *t1;
	while(head != NULL){
		t1=head;
		head=head->next;
		free(t1->doe);
		free(t1);
		count--;
		printf("\t***The number of remaining customers->%d***\n",count);
	}
	printf("\t***All used memory was freed***\n");
}
void modify()
{
	struct hotel *t1;
	float time;
	if(head == NULL){
		printf("No data to mofify\n");
		return;
	}
	else{
		t1 = head;
		printf("Enter time of customer whose data you want to modify->");
		scanf("%f",&time);
		if(time > 24){
			printf("\n\t****Invalid time entered****\n");
			return;
		}
		while(t1 != NULL && t1->time != time){
			t1=t1->next;
			if(t1 == NULL){
				printf("No matching enteries for entered time\n");
				return;
			}
			printf("\n\t****Enter new details for customer****\n\n");
			__fpurge(stdin);
			printf("Enter customer name-->");
			scanf("%[^\n]s",t1->name);
			printf("Enter Id->");
			scanf("%d",&t1->id);
		}
	}
	printf("\n\t*****Info updated successfully*****\n");
}
		




			







