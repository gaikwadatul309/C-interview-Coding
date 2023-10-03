#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<stdio_ext.h>

typedef struct flat_owner{
	char owner_name[20];
	char building_name;
	int flat_number;
	unsigned int pin_code;
}info;

struct node{
	struct flat_owner data;
	struct node *next;
};
int flag;

void add(info **);
void add_info(info **);
void display(info *, int);
void search(info node *);
void delete(info **);

int main(){
	
	info *head;
	head = NULL;
	uint8_t choice;
	
	while(1){
		printf("==== WELCOME TO SAMRUDDHI APARTMNET ====\n");
		printf("1. Add owner_info\n2. Display\n3. Search by flat number\n4. Delete flat number info\n5-> exit\n");
		printf("Enter choice : ");
		scanf("%hhu", &choice);

		switch(choice){
			case 1:	add(&head);
				break;

			case 2:	display(head,0);
				break;

			case 3:	search(head);
				break;

			case 4:	delete(&head);
				break;

			case 5:	exit(0);
				break;

			default:
				printf("invalid choice\n");
		} //end of switch

	} // end of while

	return 0;
}

void delete(info **h)
{
	info *t1, *q;
	t1 = q = *h;
	int temp;
	printf("Enter flat number: ");
	scanf("%d", &temp); 
	
	// If linked list have only one node
	if(q->data.flat_number == temp && q->next == NULL){
		(*h) = NULL;
		free(q);
		printf("flat Number %d info successfully removed\n", temp);
		return;
	}
	else{
		while(q->data.flat_number != temp && q->next != NULL){
			t = q;
			q = q->next;
		}
		if(q->data.flat_number == temp){
			if(t == q)
				(*h) = t->next;
			t->next = q->next;	
			free(q);
			q = NULL;
			printf("flat Number %d info successfully removed\n", temp);
		}
		else
			printf("flat number doesn't exist\n");

	}


}

void add(info **h)
{
	info *temp, *t1;
	t1 = *h; //t1 = head

	temp = (info *) malloc(sizeof(info));
	if(temp == NULL)
	{
		printf("Malloc failed..!!\n");
	}
	temp->next = NULL;
		
	__fpurge(stdin);
	printf("Owner Name: ");
	scanf("%[^\n]s", (*temp)->data.owner_name);
	__fpurge(stdin);
	printf("Building Name: Wing- ");
	scanf("%c", &(*temp)->data.building_name);
	__fpurge(stdin);
	printf("Flat Number: ");
	scanf("%d", &(*temp)->data.flat_number);
	__fpurge(stdin);
	printf("Pin Code: ");
	scanf("%u", &(*temp)->data.pin_code);
	
	if(*h == NULL)
		*h = temp;
	else{
		while( t1->next != NULL)
		{
			t1 = t1->next;
			t1->next = temp;
		}
	}
}

void display(info *h, int flag)
{
	info *t1;
	t1 = h;
	if(t1 == NULL){
		printf("record is empty\n");
		return;
	}
	else{
		while(t1 != NULL)
		{
			printf("------------------------------------\n");
			printf("Owner Name: %s\nBuilding Name: %c\nFlat Number: %hu\nPin code: %u\n", h->data.owner_name, h->data.building_name, h->data.flat_number, h->data.pin_code);
			if(flag == 1)
				break;
			t1 = t1->next;
		}
	}
}

void search(struct node *h)
{
	int temp;
	printf("Enter flat number: ");
	scanf("%d", &temp);
	while(h->data.flat_number != temp && h->next != NULL)
		h = h->next;
	if(h->data.flat_number == temp)
		display(h,1);
	else
		printf("flat number doesn't exist\n");

}

