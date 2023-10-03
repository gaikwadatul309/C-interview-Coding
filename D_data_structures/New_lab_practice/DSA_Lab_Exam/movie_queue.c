#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define MAX_CAPACITY 8

typedef struct counter{
	int data;
	struct node *next;
}Queue;

struct counter *front = NULL;
struct counter *rear = NULL;

void add_in_queue(Queue **, uint8_t);
void remove_customer();
void counter_closed();
void delQueue();

int count = 0;

int main(){
	Queue *head;
	head = NULL;

	uint8_t choice, customer = 0;
	while(1){
		printf("     ========== COUNTER MENU PVR ===========\n");
		printf("1. Add a cutomer to queue \n2. Remove customer from queue \n3.Close counter and Exit\n");
		printf("Enter a choice: ");
		scanf("%hhd", &choice);

		switch(choice){
			case 1: printf("========== WELCOME TO PVR TALKIES ===========\n");
				++customer;
				add_in_queue(&head,customer);
				break;

			case 2: remove_customer();
				printf(" == ENJOY THE SHOW == \n");
				break;

			case 3: counter_closed();
				exit(0);
				break;

			default:
				printf("Please Enter valid choice..!!\n");
	
		} //END OF SWITCH STATEMENT

	} //END OF WHILE

	return 0;
}

void counter_closed()
{
	Queue *t1;
	while(front != NULL)
	{
		t1 = front;
		front = front->next;
		free(t1);
	}
	printf("No customer in the Queue...Counter Closed.!!\n");
}

void remove_customer(Queue **h){
	int item;
	Queue *t1;
	if(front == NULL)
	{
		printf("Queue is empty..Counter Closed..!!\n");
		count = 0;
		free(front);
	//	return -1;
	}
	else{
		t1 = front;
		item = front->data;

		front = front->next;
		if(front->next == NULL)
		{
			rear->next = NULL;
		}
		free(t1);
		count--;
	}
	printf("Customer is served and removed from the Queue..\n");
	printf("Size of Queue = %d\n", count);

}
void add_in_queue(Queue **h, uint8_t ele){

	Queue *temp;
	if(count < MAX_CAPACITY)
	{
		temp = (Queue *) malloc (sizeof(Queue));
		if(temp == NULL)
		{
			printf("Memory is not allocated..failed!!\n");
			return;
		}
		else{
			temp->data = ele;
			temp->next = NULL;
		}
	
		if(front == NULL && rear == NULL)
		{
			front = rear = temp;
			front->next = NULL;
			rear->next = NULL;
			count++;
		}
		else{
			rear->next = temp;
			front->next = NULL;
			count++;
		}
		printf("One more customer is added in the Counter Queue\n");
		printf("Size of Queue = %d\n", count);
	}
	else{
		printf("Limit Exceeded...!!!!\n");
	}

}


