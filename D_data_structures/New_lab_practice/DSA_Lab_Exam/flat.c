//FLAT OWNER USING LINKED LIST.....

#include<stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>

struct flat{
	char name[30];
	char building;
	unsigned int flat_no;
	char society[20];
	unsigned int pin;
	struct flat *next;
};

struct flat *head;

unsigned int count=0;

void check(struct flat *);
void ins();
void disp();
void search();
void del();
void del_all();

int main()
{
	int ch;
	while(1){
		printf("\n\t=======================================================\n");
		printf("\n1->Insert\t2->Display\t3->Search\t4->Delete\t5->Exit\n");
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
				del();
				break;
			case 5:
				del_all();
				exit(0);
				break;
			default:
				printf("Enter correct value -->\n");
		}
	}
	return 0;
}

void check(struct flat *ptr)
{
	if(ptr == NULL){
		printf("\n\tMemory allocation failed\n");
		exit(0);
	}
	else{
		printf("\n\t*******Memory successfully allocated*******\n");
	}
}
void ins()
{
	struct flat *t1,*temp;
	temp=(struct flat*)malloc(sizeof(struct flat));
	check(temp);
	
	__fpurge(stdin);
	printf("Enter name ->");
	scanf("%[^\n]s",temp->name);
	__fpurge(stdin);
	printf("Enter character for building in capital letters only-->");
	scanf("%c",&temp->building);
	
	if(temp->building < 'A' || temp->building > 'Z'){
		printf("Oops!You violated the capital letter condition\n"); 
		free(temp);
		return;
	}
	/*temp->fno=(struct flat_no*)malloc(sizeof(struct flat_no));
	printf("Enter floor number ->");
	scanf("%d",&temp->fno->floor);*/
	printf("Enter flat_no of four digits-->");
	scanf("%d",&temp->flat_no);
	if(temp->flat_no < 999 || temp->flat_no > 9999){
		printf("\n\t*****Oops you violated the 4 digit condition****\n");
		free(temp);
		return;
	}
	__fpurge(stdin);
	printf("Enter society name -->");
	scanf("%[^\n]s",temp->society);
	printf("Enter pin code of 6 digits-->");
	scanf("%d",&temp->pin);
	temp->next = NULL;
	if(temp->pin <= 99999 || temp->pin > 999999){
		printf("\n\t****Oops!You violated the 6 digit condition****\n");
		free(temp);
		return;
	}

	if(head == NULL){
		head=temp;
		count++;
	}
	else{
		t1 = head;
		while(t1->next != NULL){
			t1=t1->next;
		}
		temp->next = t1->next;
		t1->next = temp;
		count++;
	}
	printf("The number of nodes -->%d\n",count);
}
void disp()
{
	struct flat *t1;
	if(head == NULL){
		printf("\n\t****No nodes to print****\n");
		return;
	}
	else{
		t1 = head;
		printf("\n\t***********All owners complete info**************\n");
		while(t1 != NULL){
			printf("\n\tOwner name                  -->%s\n",t1->name);
			printf("\tOwner Building              -->%c\n",t1->building);
		       	printf("\tOwner Floor and flat number -->%d\n",t1->flat_no);
			printf("\tOwner society name          -->%s\n",t1->society);
			printf("\tOwner pin code              -->%d\n",t1->pin);
			t1=t1->next;
		}
	}
	printf("\nThe number of nodes -->%d\n",count);
}
void search()
{
	struct flat *t1;
	int x=0;
	if(head == NULL){
		printf("\n\t*****No nodes to search from*****\n");
		return;
	}
	else{
		t1=head;
		printf("Enter flat number whose data you want -->");
		scanf("%d",&x);
		while(t1 != NULL && t1->flat_no != x){
			t1=t1->next;
			if(t1 == NULL){
				printf("\n\t****Flat number not found****\n\n");
				return;
			}
		}
		printf("\n\tOwner name                  -->%s\n",t1->name);
		printf("\tOwner Building              -->%c\n",t1->building);
		printf("\tOwner Floor and flat number -->%d\n",t1->flat_no);
		printf("\tOwner society name          -->%s\n",t1->society);
		printf("\tOwner pin code              -->%d\n",t1->pin);
	}
}
void del()
{
	struct flat *t1,*t2;
	int x=0;
	if(head == NULL){
		printf("\n\t*****No nodes to search from*****\n");
		return;
	}
	else{
		t1=head;
		printf("Enter flat number whose data you want -->");
		scanf("%d",&x);
		if(head->flat_no == x){
			head= head->next;
			free(t1);
			count--;
		}
		else{
			while(t1 != NULL && t1->flat_no != x){
				t2 = t1;
				t1 = t1->next;
				if(t1 == NULL){
					printf("\n\t****Flat number not found****\n\n");
					return;
				}
			}
			t2->next = t1->next;
			free(t1);
			count--;
			printf("\n\t****Student info successfully deleted****\n");
		}
		printf("The number of remaining	nodes-->%d\n",count);
	}
}

void del_all()
{
	struct flat *t1;
	while(head != NULL){
		t1 = head;
		head = head->next;
		free(t1);
		count--;
		printf("The number of remaining nodes -->%d\n",count);
	}
	printf("\n\t*****All used memory was freed*****\n");
}




	 









