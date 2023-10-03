#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define MAX 10		//depth of the stack initialization

struct stack{
	uint8_t data;
	struct stack *next;
};

typedef struct stack st;

void push(st **, uint8_t);
void pop(st **);
void insert_at_beg(st **, uint8_t);
void delete_at_beg(st **);
void display(st *);
void stack_del(st *);

uint8_t top = -1;	//INITALIZATION OF TOP TO -1 (INITIAL POSITION )

int main(){
//	typedef struct stack st;
	st *head = NULL;
	uint8_t choice, ele;
	while(1){
		printf("=============================================\n");
		printf("------------  ENTER THE CHOICE  -------------\n");
		printf(" 1. PUSH	2. POP\n");
		printf(" 3. DISPLAY	4. EXIT\n");
		printf("=============================================\n");
		
		printf("choice = ");
		scanf("%hhd", &choice);
		switch(choice){
			case 1: printf("Enter the Element to insert in stack\n");
				scanf("%hhd", &ele);
				push(&head, ele);
				break;

			case 2: pop(&head);
				break;

			case 3: printf("The elements of stack are: -\n");
				display(head);
				break;

			case 4: stack_del(head);
				exit(0);
				break;

			default:
				printf("Please Enter valid choice..!!\n");
		}  //END OF SWITCH FUNCTION
	} // END OF WHILE

	return 0;

} //END OF MAIN FUNCTION 

void push(st **p, uint8_t ele){
	if((top) == MAX-1)
	{
		printf("Stack is full..!!\n");
	}
	else{
		insert_at_beg(p,ele);
	}
}
void pop(st **p){
	if(top == -1)
	{
		printf("Stack if Emplay..!!\n");
	}
	else{
		delete_at_beg(p);
	}

}
void insert_at_beg(st **p, uint8_t ele){
	st *t1 = *p, *temp;

	temp = (st *) malloc (sizeof(st));

	if(temp == NULL)
	{
		printf("Malloc fail...memory not allocated.!!\n");
	}
	temp->data = ele;
	temp->next = NULL;

	if(*p == NULL)
	{
		top++;
		*p = temp;
	}
	else{
		top++;
		temp->next = *p;
		*p = temp;
	}
}

void delete_at_beg(st **p){
	st *t1 = *p;
	if(*p == NULL)
	{
		printf("No nodes are present to delete \n");
	}
	else{
		*p = t1->next;
		free(t1);
		(top)--;
	}
}

void display(st *p){
	st *t1 = p;
	if(p == NULL)
	{
		printf("Stack is empty..nothing to display..!!\n");
	}
	else if(top == MAX-1)
	{
		printf("Stack if Full..");
	}
	else{
		while(t1 != NULL)
		{
			printf("--->%hhd", t1->data);
			t1 = t1->next;
		}
	}
	printf("\n");
}

void stack_del(st *p){
	st *t1;
	while(p != NULL)
	{
		t1 = p;
		p = p->next;
		free(t1);
	}

}

