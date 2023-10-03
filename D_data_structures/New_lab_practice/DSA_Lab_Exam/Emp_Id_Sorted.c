#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<string.h>
#include<stdio_ext.h>

struct employee{
	struct employee *prev;
 	char name[10];
	uint16_t ID;
	char gender;
	char post[10];
	struct employee *next;
};	
typedef struct employee emp;

void add_node(emp **,uint8_t,char *,char,char *);
int search(emp **,uint8_t);
void modify(emp **,uint8_t,char *,char,char *);
void show_all(emp *);
void delete(emp **,uint8_t);
int count(emp *,uint8_t);
int duplicate(emp **,uint8_t);
uint8_t co=0;

int main()
{
	emp *head=NULL;
	uint8_t ch,id,s;
	char Name[10],Post[10],gen;
	while(1){
		printf("Total No. of employees in organization - %u\n",co);
		printf("1.Add 2.Search 3.Modify 4.show_all 5.delete 6.Exit\n");
		printf("Enter the choice\n");
		scanf("%hhd",&ch);
		switch(ch){
			case 1:	
				printf("Enter the Employee ID\n");
				scanf("%hhd",&id);
				s=duplicate(&head,id);
				if(s == 0){
					printf("Enter the Employee name\n");
					__fpurge(stdin);
					scanf("%[^\n]s",Name);
					printf("Enter the Gender\n");
					__fpurge(stdin);
					scanf("%c",&gen);
					printf("Enter the Designation\n");
					__fpurge(stdin);
					scanf("%[^\n]s",Post);	
					add_node(&head,id,Name,gen,Post);	//add function call
				}
				else{
					printf("Employee ID exists in list\n");
				}
				break;
			case 2:
				printf("Enter the Employee ID\n");
				scanf("%hhd",&id);
				s=search(&head,id);				//search function
				if(s == 0){
					printf("emp ID not found\n");
				}
				else{
					printf("Employee details----\n");
				}
				break;
			case 3:
				printf("Enter the Employee ID\n");
				scanf("%hhd",&id);
				s=search(&head,id);				//search before modify
				if(s == 0){
					printf("emp ID not found\n");
				}
				else{
				printf("Enter the Employee name\n");		//data to modify in given id
				__fpurge(stdin);
				scanf("%[^\n]s",Name);
				printf("Enter the Gender\n");
				__fpurge(stdin);
				scanf("%c",&gen);
				printf("Enter the Designation\n");
				__fpurge(stdin);
				scanf("%[^\n]s",Post);
				modify(&head,id,Name,gen,Post);			//modify func call
				}
				break;
			case 4:
				show_all(head);					//display employee data
				break;
			case 5:
				printf("Enter the Employee ID\n");
				scanf("%hhd",&id);
				delete(&head,id);				//delete by id no.
				break;
			case 6:
				emp *t1=head;					//free all nodes before exit
				while(t1 != NULL){
					t1=t1->next;
					free(head);
					head=t1;
				}
				exit(0);
		}
	}			
	return 0;
}

int duplicate(emp **q,uint8_t id)
{
	emp *t1=*q;
	if(*q == NULL){
		return 0;
	}
	else{
		while(t1!=NULL){
			if(id == t1->ID){			//if match found return 1
				return 1;
			}
			t1=t1->next;
		}
		return 0;					//match not found return 0
	}
}

int count(emp *q,uint8_t id)						//count function to count the position by id no.
{
	int c=0;
	emp *t1=q;
	while(t1 != NULL){
		if(id >= t1->ID){
			c++;
		}
		t1=t1->next;
	}
	return c;
}

void add_node(emp **q,uint8_t id,char *Name,char gen,char *Post)	//add_node based on count position
{
	uint8_t i=1;
	emp *temp,*t1=*q;
	temp=(emp *)malloc(sizeof(emp));
	if(temp == NULL){
		printf("malloc fail\n");
		return;
	}
	temp->ID=id;
	strcpy(temp->name,Name);
	temp->gender=gen;
	strcpy(temp->post,Post);
	temp->prev=NULL;
	temp->next=NULL;
	if(*q == NULL){
		*q=temp;
	}
	else{
		uint8_t c=count(*q,id);
		 if(c == 0){						//insert at beg
			temp->next=*q;
			(*q)->prev=temp;
			*q = temp;
		}
		else{
			while(++i<c+1){					//insert at pos
				t1=t1->next;
			}
			temp->prev=t1;
			temp->next=t1->next;
			t1->next=temp;
		}
	}
	co++;
}


void show_all(emp *q)
{
	emp *t1=q;
	if(q == NULL){
		printf("No employees\n");
	}
	else{
		while(t1 != NULL){
			printf("Employee ID - %u\n",t1->ID);
			printf("Employee Name - %s\n",t1->name);
			printf("Employee Gender - %c\n",t1->gender);
			printf("Employee Designation - %s\n",t1->post);
			t1=t1->next;
		}
	}
}

int search(emp **q,uint8_t id)
{
	emp *t1=*q;
	if(*q == NULL){
		printf("No nodes are present to search\n");
	}
	else{
		while(t1!=NULL){
			if(id == t1->ID){						//display searched id
				printf("Employee Name - %s\n",t1->name);
				printf("Employee Gender - %c\n",t1->gender);
				printf("Employee Designation - %s\n",t1->post);
				return 1;
			}
			t1=t1->next;
		}
		return 0;
	}
}

void modify(emp **q,uint8_t id,char *Name,char gen,char *Post)				//overwrites the prev data by new in modify func
{
	emp *t=*q;
	while(id != t->ID){
		t=t->next;
	}
	strcpy(t->name,Name);
	strcpy(t->post,Post);
	t->gender=gen;
}

void delete(emp **q,uint8_t id)
{
	 emp *t1=*q;
	 if(*q == NULL){
		 printf("No nodes can be deleted\n");
	 }
	
	 else{
		 int c=count(*q,id);
		 if(1 == c){						//delete from beg
			 *q=t1->next;
			 free(t1);
			 if(*q != NULL){
				 (*q)->prev=NULL;
			 }
		 }
		 else if(co == c){					//delete if one node is present
			 while(t1->next != NULL){
				 t1=t1->next;
			 }
			 t1->prev->next =NULL;
			 free(t1);
		 }
		 else{							//delete from pos
			 int i=0;
			 while(++i<c){
				 t1=t1->next;
			 }
			 t1->next->prev =t1->prev;
			 t1->prev->next =t1->next;
			 free(t1);
		 }
		 co--;
	 }
}
