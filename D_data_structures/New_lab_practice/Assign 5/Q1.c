#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};
struct node *head;

void insert_at_beg(int);
void insert_at_end(int);
void insert_at_pos(int, int);
void display();
void nodecount();
void del_at_beg();
void del_at_end();
void del_at_pos();

int main(){
	int ele, choice, pos;

	while(1){
		printf("-------------MENU-------------\n");
		printf("1. Insert at End \n2. Insert at Beg \n3. Insert at Position \n4. Display linklist \n5. Node count\n");
		printf("6. Delete node form beg \n 7. Delete node from end \n8. Delete node from position\n9. Search an element \n10. Exit\n");
		
		printf("Enter the choice: ");
		scanf("%d", &choice);
		
		switch(choice){
			case 1: printf("Enter an element: ");
				scanf("%d", &ele);
				insert_at_end(ele);
				break;

			case 2: printf("Enter an element: ");
				scanf("%d", &ele);
				insert_at_beg(ele);
				break;

			case 3: printf("Enter the position to enter the element: ");
				scanf("%d", &pos);
				printf("Enter the element: ");
				scanf("%d", &ele);
				insert_at_pos(pos, ele);
				break;

			case 4: display();
				break;

			case 10: exit(0);
				 break;
			default: 
				 printf("Please Enter a valid choice .!!!\n");
		}  //end of switch

	}  // end of while

	return 0;
}  //end of main
 
void insert_at_beg(int ele){
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	if(temp==NULL)
	{
		printf("Memory is not allocated\n");
	}
	else{
		temp->data=ele;
		temp->next=head;
		head=temp;
	}
}

void insert_at_pos(int pos,int ele){
	struct node *temp;
	struct node *t1;
	int i=1;
	temp=(struct node *)malloc(sizeof(struct node));
	if(temp==NULL)
	{
		printf("Memory is not available ..!!\n");
	}
	temp->data=ele;
	temp->next=NULL;
	
	if(pos==1)
	{
		insert_at_beg(ele);
	}
	else
	{
		while(++i<pos-1){
			t1=t1->next;
		}  // end of while
	temp->next=t1->next;
	t1->next=temp;
	}

}

void insert_at_end(int ele){
	struct node *temp;
	struct node *t1;
	t1=head;

	temp=(struct node *)malloc(sizeof(struct node));
	if(temp==NULL)
	{
		printf("Memory is not available ..!!\n");
	
	}
	temp->data=ele;
	temp->next=NULL;
	
	if(head==NULL)			//if head is null then assign temp to head
	{
		head=temp;
	}
	else
	{
		while(t1->next!=NULL)
		{
			t1=t1->next;
		}
		t1->next=temp;		//insertion node at the end 
	}
}

void display(){
	struct node *t1;
	t1=head;
	if(head==NULL)
	{
		printf("Empty linklist..No node available.!!!\n");
	}
	while(t1->next!=NULL)		//while loop to iterate untill t1->next==NULL
	{
		printf("--> %d", t1->data);
		t1=t1->next;
	}
	printf("\n");
}


