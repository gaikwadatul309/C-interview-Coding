#include<stdio.h>
#include<stdlib.h>

#define MAX 10

struct node{
	int data;
	struct node*next;
};
struct node* front = NULL;
struct node* rear = NULL;

void enqueue(int);
int dequeue();
void display();
void delqueue();
int count = 0;

int main(){
	int choice, ele, item;
	while(1){
		printf("----- MENU -----\n");
		printf("1. Enqueue \t2. Display \n3. Dequeue \t4. Delete Queue and Exit \n");
		printf("Enter a choice: ");
		scanf("%d", &choice);

		switch(choice){
			case 1: printf("Enter an element: ");
				scanf("%d", &ele);
				enqueue(ele);
				break;

			case 2: display();
				break;

			case 3: item = dequeue();
				printf("The deleted item = %d\n", item);
				break;

			case 4: delqueue();
				printf("Queue is empty..!!!\nExiting the Queue...\n");
				exit(0);
				break;

			default:
				printf("Please enter a valid choice...!!!!\n");

		}  //end of switch

	}  //end of while

	return 0;
}  //end of main

/*---------------------ENQUEUE---------------------------*/
void enqueue(int ele){
	struct node* temp;
	if(count<MAX)
	{

	temp = (struct node*) malloc (sizeof(struct node));

	if(temp == NULL)
	{
		printf("The memory is not allocated...\n");
		return;
	}
	else{
		temp -> data = ele;
		temp -> next = NULL;
	}
	if(front == NULL && rear == NULL)
	{
		front = rear = temp;
		front -> next = NULL;
		rear -> next = NULL;
		count++;
	}
	else{
		rear -> next = temp;
		rear = temp;
		rear -> next = NULL;
		count++;
	}
	printf("Count = %d", count);
	}
	else{
		printf("Exceeded the maximum limit..!!!!!\n");
	}
}

/*---------------------DEQUEUE---------------------------*/
int dequeue(){
	int item;
	struct node* t1;
	if(front == NULL)
	{
		printf("Queue is empty. Nothing to dequeue !!!\n");
		count = 0;
		free(front);
		return -1;
	}
	else{
		t1 = front;
		item = front -> data;
		
		//making front node points to next node
		
		front = front -> next;
		
		if(front->next == NULL)
		{
			rear -> next = NULL;
		}
		free(t1);
		count--;
	//	return item;
	}
	printf("Count = %d\n", count);
	return item;
}

/*---------------------DISPLAY----------------------------*/

void display(){
	struct node *t1 = front;
	while(t1){
		printf("-->%d", t1->data);
		t1 = t1->next;
	}
	printf("\n");
	printf("Count = %d", count);
				
}


/*---------------------DEL-QUEUE-------------------------*/

void delqueue(){
	struct node * t1;
//	t1 = front;
	while(front != NULL)
	{
		t1 = front;
		front = front -> next;
		free(t1);
	}
}




