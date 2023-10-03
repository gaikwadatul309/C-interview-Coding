#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};
struct node *head;

void insert_at_end(int);
void display();

int main(){
	int choice, ele;
	head=NULL;
	while(1){
		printf("--------------MENU------------\n");
		printf("1. Insert At End  \n2. Display \n10. Exit\n");
		printf("Please enter a choice: \n");
		scanf("%d", &choice);

		switch(choice){
			case 1: printf("Enter a ele: ");
				scanf("%d", &ele);
				insert_at_end(ele);
				break;

			case 2: printf("The linklist is---->\n");
				display();
				printf("\n");
				break;

			case 10: exit(0);
				 break;
			default: 
				 printf("Please enter a valid choice !!\n");
		}  //end of switch
	} //end of while
	
	return 0;
}	//end of main

void inset_at_end(int a){
	struct node *temp;
	struct node *t1;
	t1=head;
	temp=(struct node*)malloc(sizeof(struct node));
	if(temp==NULL)
	{
		printf("The memory is not allocated  !!\n");
	}
	temp->data=a;
	temp->next=NULL;

	if(head==NULL)
	{
		head=temp;
	}
	else
	{
		while(t1->next!=NULL)
		{
			t1=t1->next;
		}
		t1->next=temp;
	}
}

void display(){
	int i;
	struct node *t1;
	t1=head;
	if(head==NULL)
	{
		printf("No node available....linklist is empty\n");
	}
	else{
		while(t1->next!=NULL)
		{
			printf("-->%d", t1->data);
			t1=t1->next;
		}
	}
}
