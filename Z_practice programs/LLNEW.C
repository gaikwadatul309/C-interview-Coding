#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct Node
{
	int nData;
	struct Node *pLink;
};
void Display(struct Node*);
struct Node* create(struct Node*);
struct Node* Insertinbetween(struct Node*,int ,int);
int Search(struct Node * ,int );
struct Node* InsertatEnd(struct Node*,int);
struct Node* Insertatbegin(struct Node*,int);
struct Node* Delete(struct Node*,int);

int main()
{

	struct Node* head1=NULL;
	int choice;
	int val,a,pos;
	clrscr();
	head1=NULL;
	do
	{
		printf("\n\t ..........MENU............");
		printf("\n\t1. Create Node");
		printf("\n\t2. Display");
		printf("\n\t3. Insert In Between");
		printf("\n\t4. Insert at end");
		printf("\n\t5. Insert at Begin");
		printf("\n\t6. To Search The element");
		printf("\n\t7. To Delete The Element");
		printf("\n\tEnter The Choice");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:
			head1=create(head1);
			break;
		case 2:
			Display(head1);
			break;
		 case 3:
			printf("\nEnter Data To Be Inserted & position\n");
			scanf("%d%d",&val,&pos);
			head1=Insertinbetween(head1,val,pos) ;

			break;
		 case 4:
			printf("\nEnter Data To Be Inserted \n");
			scanf("%d",&val);
			head1=InsertatEnd(head1,val);
			break;
		 case 5:
			printf("\nEnter Data To Inserted\n");
			scanf("%d",&val);
			head1=Insertatbegin(head1,val);
			break;
		 case 6:
			printf("\n\t Enter The Element To Be Search");
			scanf("%d",&val);
			a=Search(head1,val);
			if(a==1)
			{
				printf("\n\t Data Found");
			}
			else
			{
				printf("\n\t Data Not Found");
			}
			break;
	       case 7:
			printf("\n\tEnter The Data To Deleted\n");
			scanf("%d",&val);
			head1=Delete(head1,val);
			break;

		}
	}while(choice<8);
	getch();
	return 0;

}
struct Node * create(struct Node* head1)
{
	struct Node *curr,*prev;
	char ans;
	do
	{
		curr=(struct Node*)malloc(sizeof(struct Node));
		printf("\nEnter Data");
		scanf("%d",&curr->nData);
		curr->pLink=NULL;
		if(head1==NULL)
		{
			head1=curr;
			prev=curr;
		}
		else
		{
			prev->pLink=curr;
			prev=curr;
		}

		printf("\n\tDo you want to add More?");
		flushall();
		scanf("%c",&ans);
	}while(ans=='y'||ans=='Y');
	return head1;
}
void  Display(struct Node * list)
{
	struct Node *DummyList;
	DummyList=list;
	printf("\n\t Contents of Link list are\n");
	while(DummyList!=NULL)
	{
		printf("%d--->",DummyList->nData);
		DummyList=DummyList->pLink;
	}
	printf("NULL");

}
struct Node* InsertatEnd(struct Node* list,int nValue)
{
	struct Node* DummyNode;
	DummyNode=list;
	if(list==NULL)
	{
		list=malloc(sizeof(struct Node));
		list->nData=nValue;
		list->pLink=NULL;
		return list;
	}
	else
	{
		DummyNode=list;
		while(DummyNode->pLink!=NULL)
		{
			DummyNode=DummyNode->pLink;
		}
			DummyNode->pLink=malloc(sizeof(struct Node));
			DummyNode=DummyNode->pLink;
			DummyNode->nData=nValue;
			DummyNode->pLink=NULL;



	}
		return list;



}
int Search(struct Node *list ,int nValue)
{
	struct Node *DummyNode;
	DummyNode=list;
	while(DummyNode!=NULL)
	{
		if(DummyNode->nData==nValue )
		{
			return 1;
		}
		DummyNode=DummyNode->pLink;
	}
	return -1;
}
struct Node* Insertatbegin(struct Node* list,int nValue)
{
	struct Node* DummyNode;
	if(list==NULL)
	{
		list=malloc(sizeof(struct Node)) ;
		list->nData=nValue;
		list->pLink=NULL;
		return list;
	}
	else
	{
		DummyNode=malloc(sizeof(struct Node));
		//DummyNode=DummyNode->pLink;
		DummyNode->nData=nValue;
		//DummyNode->pLink=NULL;
		DummyNode->pLink=list;
		list=DummyNode;
	}
	return list;
}
 struct Node* Delete(struct Node* list,int nValue)
 {
	struct Node *prevNode,*Dummylist;
	int flag=0;
	Dummylist=list;
	while(Dummylist!=NULL)
	{
		if(Dummylist->nData==nValue)
		{
			flag=1;
			printf("\n\tDeleting %d",Dummylist->nData);
			if(Dummylist==list)
			{
				list=Dummylist->pLink;
				free(Dummylist);
			}
			else
			{
				 prevNode->pLink=Dummylist->pLink;
				free(Dummylist);
			}

		}
		else
		{
			prevNode=Dummylist;
			Dummylist=Dummylist->pLink;
		}
	}
	if(flag==0)
	{
		printf("\n\t The Element %dnot Found",nValue);
	}
	return list;

 }




struct Node* Insertinbetween(struct Node* list ,int nValue ,int pos )
{
	struct Node *DummyNode, *prev,*curr;
	int cnt;
	DummyNode=list;
	if(list==NULL)
	{
		list=malloc(sizeof(struct Node));
		list->nData=nValue;
		list->pLink=NULL;
		return list;
	}
	else
	{
		DummyNode=list;
		cnt=1;
		while(DummyNode!=NULL && cnt<pos)
		{
			prev=DummyNode;
			DummyNode=DummyNode->pLink;
			cnt++;

		}
		if(DummyNode!=NULL)
		{
			curr=malloc(sizeof(struct Node));
			curr->nData=nValue;
			prev->pLink=curr;
			curr->pLink=DummyNode;
		}
		else
		{
			printf("\n Position Not Found\n");
		}

	}
	return list;
}




