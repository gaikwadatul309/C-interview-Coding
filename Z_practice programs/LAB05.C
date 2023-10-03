
/*Operations on singly linked list - Create, Insert,Delete,Search */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct node
   { int data;
	 struct node *next;
   }node;

node *create();
node *insert_b(node *head,int x);
node *insert_e(node *head,int x);
node *insert_in(node *head,int x);
node *delete_b(node *head);
node *delete_e(node *head);
node *delete_in(node *head);
void search(node *head);
void print(node *head);

void main()
{
  int op,op1,x;
  node *head=NULL;
  clrscr();
  do
    {
      printf("\n\n1)create\n2)Insert\n3)Delete\n4)Search");
      printf("\n5)Print\n6)Quit");
      printf("\nEnter your Choice:");
      scanf("%d",&op);
      switch(op)
       {
	 case 1:
		head=create();
		break;
	 case 2:printf("\n\t1)Beginning\n\t2)End\n\t3)In between");
		printf("\nEnter your choice : ");
		scanf("%d",&op1);
		printf("\nEnter the data to be inserted : ");
		scanf("%d",&x);
		switch(op1)
		 {  case 1: head=insert_b(head,x);
			    break;
		    case 2: head=insert_e(head,x);
			    break;
		    case 3: head=insert_in(head, x);
			    break;
		  }
		break;
	 case 3:printf("\n\t1)Beginning\n\t2)End\n\t3)In between");
		printf("\nEnter your choice : ");
		scanf("%d",&op1);
		switch(op1)
		 {  case 1:head=delete_b(head);
			   break;
		    case 2:head=delete_e(head);
			   break;
		    case 3:head=delete_in(head);
			   break;
		  }
		 break;
	 case 4:search(head);break;
	 case 5:print(head);break;
       }
    }while(op!=6);
}

node *create()
{
	node *head,*p;
	int i,n;
	head=NULL;
	printf("\n Enter no of data:");
	scanf("%d",&n);
	printf("\nEnter the data:");
	for(i=0;i<n;i++)
	    {
		if(head==NULL)
			p=head=(node*)malloc(sizeof(node));
		else
		   {
			p->next=(node*)malloc(sizeof(node));
			p=p->next;
		   }
		p->next=NULL;
		scanf("%d",&(p->data));
	    }
	return(head);
}

node *insert_b(node *head,int x)
{
	node *p;
	p=(node*)malloc(sizeof(node));
	p->data=x;
	p->next=head;
	head=p;
	return(head);
}

node *insert_e(node *head,int x)
{
	node *p,*q;
	p=(node*)malloc(sizeof(node));
	p->data=x;
	p->next=NULL;
	if(head==NULL)
		return(p);
    //locate the last node
    for(q=head;q->next!=NULL;q=q->next)
    ;
    q->next=p;
    return(head);
}

node *insert_in(node *head,int x)
{
	node *p,*q;
	int y;
	p=(node*)malloc(sizeof(node));
	p->data=x;
	p->next=NULL;
	printf("\Insert after which number ? : ");
	scanf("%d",&y);
    //locate the lthe data 'y'
	for(q=head ; q != NULL && q->data != y ; q=q->next)
	;
	if(q!=NULL)
	   {
		p->next=q->next;
		q->next=p;
	   }
	else
		printf("\nData not found ");
	return(head);
}
node *delete_b(node *head)
{
	node *p,*q;
	if(head==NULL)
	   {
		printf("\nUnderflow....Empty Linked List");
		return(head);
	   }
	p=head;
	head=head->next;
	free(p);
	return(head);

}
node *delete_e(node *head)
{
	node *p,*q;
	if(head==NULL)
	   {
		printf("\nUnderflow....Empty Linked List");
		return(head);
	   }
	p=head;
	if(head->next==NULL)
	   { // Delete the only element
		head=NULL;
		free(p);
		return(head);
	   }
	//Locate the last but one node
	for(q=head;q->next->next !=NULL;q=q->next)
	;
	p=q->next;
	q->next=NULL;
	free(p);
	return(head);
}

node *delete_in(node *head)
{
	node *p,*q;
	int x,i;
	if(head==NULL)
	   {
		printf("\nUnderflow....Empty Linked List");
		return(head);
	   }
	printf("\nEnter the data to be deleted : ");
	scanf("%d",&x);
	if(head->data==x)
	    { // Delete the first element
		p=head;
		head=head->next;
		free(p);
		return(head);
	    }
	//Locate the node previous to one to be deleted
	for(q=head;q->next->data!=x && q->next !=NULL;q=q->next )
	;
	if(q->next==NULL)
	    {
		printf("\nUnderflow.....data not found");
		return(head);
	    }
	p=q->next;
	q->next=q->next->next;
	free(p);
	return(head);
}

void search(node *head)
{
	node *p;
	int data,loc=1;
	printf("\nEnter the data to be searched: ");
	scanf("%d",&data);
	p=head;
	while(p!=NULL && p->data != data)
	   {
		loc++;
		p=p->next;
	   }

	if(p==NULL)
		printf("\nNot found:");
	else
		printf("\nFound at location=%d",loc);
}

void print(node *head)
{
	node *p;
	printf("\n\n");
	for(p=head;p!=NULL;p=p->next)
		printf("%d  ",p->data);
}

