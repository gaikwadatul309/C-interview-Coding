//STUDENT DATA USING DOUBLE LINKED LIST....

#include<stdio.h>
#include<stdlib.h>

struct student{
	struct student *prev;
	char name[50];
	unsigned int age;
	unsigned int roll;
	char address[50];
	struct student *next;
};

struct student *head;

unsigned int count =0;

void check(struct student *ptr);
void ins();
int dupli(struct student *);
void search();
void del_stu();
void disp();
void modify();
void del_all();

int main()
{
	int ch;
	while(1){
		printf("\n\t=============================================\n\n");
		printf("1->Insert \t2->Disp \t3->Search \t4->Modify\t5->Delete a student\t6->Exit\n\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				ins();
				break;
			case 2:
				disp();
				break;
			case 3:
				search();
				break;
			case 4:
				modify();
				break;
			case 5:
				del_stu();
				break;
			case 6:
				exit(0);
				break;
			default:
				printf("\nEnter correct value\n");
		}
	}
	return 0;
}
void check(struct student *ptr)
{
	if(ptr == NULL){
		printf("\n\t**** Memory allocation failed ****\n");
		exit(0);
	}
	else{
		printf("\n\t***** Memory allocation successfull *****\n");
	}
}
void ins()
{
	struct student *t1,*temp;
	unsigned int x = 0;
	temp = (struct student*)malloc(sizeof(struct student));
	check(temp);
	printf("Enter name -->");
	scanf("\n%s",temp->name);
	printf("Enter age -->");
	scanf("%d",&temp->age);
	printf("Enter roll -->");
	scanf("%d",&temp->roll);

	x = dupli(temp);
	if(x == 0){
		printf("\n\t **** Duplicate entry found ****\n");
		free(temp);
		return;
	}
	printf("Enter student address -->");
	scanf("\n%s",temp->address);
	temp->prev = NULL;
	temp->next = NULL;
	if(head == NULL){
		head = temp;
		count++;
	}
	else if(head->roll > temp->roll){
		t1=head;
		temp->next = t1;
		t1->prev = temp;
		head = temp;
		count++;
	}
	else if(head->roll < temp->roll){
		t1=head;
		while(t1->next != NULL && t1->next->roll < temp->roll){
			t1=t1->next;
		}
		temp->next = t1->next;
		t1->next = temp;
		temp->prev = t1;
		count++;
	}
	else{
		t1 = head;
		while(t1->next != NULL && t1->roll < temp->roll){
			t1=t1->next;
		}
		temp->next = t1->next;
		t1->next = temp;
		temp->prev = t1;
		count++;
	}
}
int dupli(struct student *t2)
{
	struct student *t1;
	if(head == NULL){
		printf("\n\t**** No nodes to compare as it is first node ****\n");
	}
	else{
		t1 = head;
		while(t1 != NULL && t1->roll != t2->roll){
			t1=t1->next;
			if(t1 == NULL){
				printf("\n\t ****No duplicates found ****\n");
				return 1;
			}
		}
		printf("\n\t ****Student with same roll number already exist ****\n");
		return 0;
	}
}

void disp()
{
	struct student *t1;
	if(head == NULL){
		printf("\n\t ****No nodes to print ****\n");
		return;
	}
	else{
		t1=head;
		printf("\n\t--------------All Students Info-----------------\n\n");
		while(t1 != NULL){
			printf("\tStudent name    ->%s\n",t1->name);
			printf("\tStudent age     ->%d\n",t1->age);
			printf("\tStudent roll    ->%d\n",t1->roll);
			printf("\tStudent address ->%s\n\n",t1->address);
			t1=t1->next;
		}
	}
	printf("\tThe number of nodes --->%d\n\n",count);
}
void search()
{
	struct student *t1;
	unsigned int x = 0;
	if(head == NULL){
		printf("\n\t***** No nodes to search from *****\n");
		return;
	}
	else{
		t1 = head;
		printf("Enter roll number you want to search from -->");
		scanf("%d",&x);
		while(t1 != NULL && t1->roll != x){
			t1 = t1->next;
			if(t1 == NULL){
				printf("\n\t***** No duplicates found *****\n");
				return;
			}
		}
		printf("\n\t--------Info of required student--------\n\n");
		printf("\tStudent name    ->%s\n",t1->name);
		printf("\tStudent age     ->%d\n",t1->age);
		printf("\tStudent roll    ->%d\n",t1->roll);
		printf("\tStudent address ->%s\n\n",t1->address);
	}
}
void modify()
{
	unsigned int x = 0;
	struct student *t1;
	if(head == NULL){
		printf("\n\t---No nodes to modify\n");
		return;
	}
	else{
		t1 = head;
		printf("Enter roll number of student whose data you want to modify --->");
		scanf("%d",&x);
		while(t1 != NULL && t1->roll != x){
			t1=t1->next;
			if(t1 == NULL){
				printf("\n\t------No such roll number in list-------\n");
				return;
			}
		}
		printf("\n\t---------Mactching roll number found.Enter new values--------\n");
		printf("\n\tEnter new student name --->");
		scanf("\n%s",t1->name);
		printf("\tEnter age of new student --->");
		scanf("%d",&t1->age);
		printf("\tEnter address of new student -->");
		scanf("\n%s",t1->address);
		printf("\n\t--------Info updated successfully--------\n\n");
	}
}

void del_stu()
{
	struct student *t1,*t2;
	unsigned int x=0;
	if(head == NULL){
		printf("-----No nodes to delete from-----\n");
		return;
	}
	else{
		t1 = head;
		printf("------\n\tEnter roll of student whose data you want to delete-----\n");
		scanf("%d",&x);
		if(head->roll == x){
			head=head->next;
			free(t1);
		//	head->prev = NULL;
			count--;
		}
		else if(count == 2){
			while(t1 != NULL && t1->roll != x){
				t2=t1;
				t1=t1->next;
				if(t1 == NULL){
					printf("\n\t-------No matching nodes------\n");
					return;
				}
			}
			t2->next = NULL;
			free(t1);
			count--;
		}
		else{
			while(t1->roll != x && t1 != NULL){
				t2 = t1;
				t1 = t1->next;
				if(t1 == NULL){
					printf("\n\t------No matching nodes-------\n");
					return;
				}
			}
			t2->next = t1->next;
			t1->next->prev = t2;
			count--;
			free(t1);
			
		}
		printf("\n\t------The number of remaining nodes --->%d\n",count);
	}
}

void del_all()
{
	struct student *t1;
	while(head != NULL){
		t1 = head;
		head = head->next;
		free(t1);
		count--;
		printf("\n\t----The number of remaining nodes-->%d----\n",count);
	}
	//head = NULL;
}






