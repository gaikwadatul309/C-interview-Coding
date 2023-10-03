#include<stdio.>.h                                                      //Preprocessor Directive
int linsearch(int[],int,int);				                //Linear search function prototype
int binsearch(int[],int,int);                                           //Binary search function prototype
void bubblesort(int[],int);                                             //Bubble Sort function prototype
void main()                                                             //Program Initialization
{
	int A[100],i,iElem,Anum,n,iChoice; 		                //Array and variable declaration
	char cCh;
	clrscr();
	do                                                  //Initialization of "do-while" loop
	{
		printf("\nEnter your choice of searching:\n");
		printf("\n---------1-Linear Search----------\n");
		printf("\n---------2-Binary Search----------\n");
		printf("\n---------3-EXIT-------------------\n");
		scanf("%d",&iChoice);
		switch(iChoice)
		{
			case 1:						 //Case for linear search
				printf("\nEnter the array size:\n");
				scanf("%d",&Anum);
				printf("\nEnter the array elements:\n");
				for(i=0;i<Anum;i++)                      //For Loop initialization
				{
					scanf("%d",&A[i]);
				}
				printf("\nEnter the number to be searched:\n");
				scanf("%d",&n);
				iElem=linsearch(A,Anum,n);		//Linear search function call
				if(iElem==-1)
				{
					printf("\nEntered number not found in given array\n");
				}
				else
				{
					printf("\nEntered number found in the array at position %d\n",iElem+1);
				}
				break;
			case 2:						// Case for Binary search function
				printf("\nEnter the array size:\n");
				scanf("%d",&Anum);
				printf("\nEnter the array elements:\n");
				for(i=0;i<Anum;i++)                     //For Loop initialization
				{
				scanf("%d",&A[i]);
				}
				bubblesort(A,Anum);			//Bubble sort function call
				printf("\nEnter the number to be searched:\n");
				scanf("%d",&n);
				iElem=binsearch(A,Anum,n);		//Binary search function call
				if(iElem==-1)
				{
					printf("\nEntered number not found in given array\n");
				}
				else
				{
					printf("\nEntered number found in the array at position %d\n",iElem+1);
				}
				break;
			case 3:
				exit(0);
			default:
				printf("\nThe choice entered is invalid! Please retry.\n");
		}
		printf("\nDo you want to continueY/N\n");
		fflush(stdin);                                          //Buffer Clearance
		scanf("\n%c",&cCh);
	}while(cCh=='y'||cCh=='Y');
	getch();
}
int linsearch(int a[],int anum,int N)                                   //Linear search function definition
{
	int j;
	for(j=0;j<anum;j++)                                             //Linear Search Logic
	{
		if(N==a[j])
			return(j);
	}
	return(-1);
}
int binsearch(int a[],int anum,int N) 					//Binary search function definition
{
	int low,high,mid;
	low=0;                                                          //Binary search Logic
	high=anum-1;
	while(low<=high)
	{
		mid=(high+low)/2;
		if(N==a[mid])
		{
			return(mid);
		}
		if(N<a[mid])
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
	}
	return(-1);
}
void bubblesort(int a[],int anum)                                       //Bubble sort function definition
{
	int hold,j,pass,k;
	int switched=1;
	for(pass=0;pass<anum-1&&switched==1;pass++)
	{
		switched=0;                                             //Bubble Sort Logic
		for(j=0;j<anum-pass-1;j++)
		{
			if(a[j]>a[j+1])
			{
				switched=1;
				hold=a[j];
				a[j]=a[j+1];
				a[j+1]=hold;
			}
		}
	}
	printf("\nThe sorted array is\n");
	for(k=0;k<anum;k++)
	{
		printf("%d\t",a[k]);
	}
	getch();
}
/*
Output for linear search:
-------------------------

Enter your choice of searching:

---------1-Linear Search----------

---------2-Binary Search----------

---------3-EXIT-------------------
1

Enter the array size:
4

Enter the array elements:
65
23
12
52

Enter the number to be searched:
52

Entered number found in the array at position 4

Do you want to continueY/Y
--------------------------------------------------------
Output for Binary Search:
-------------------------

Enter your choice of searching:

---------1-Linear Search----------

---------2-Binary Search----------

---------3-EXIT-------------------
2

Enter the array size:
4

Enter the array elements:
98
72
54
63

The sorted array is
54      63      72      98
Enter the number to be searched:
68

Entered number not found in given array
*/