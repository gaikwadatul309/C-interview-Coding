//  Write a C/C++ program to implement single linked list in sorted order. Implement below metioned functions. Apply all required 
//condition check & validation like list empty or not, while inserting/deleting by position validate the position. Implement a policy
//for duplicate value input.    a)insert  b) displayList  c)listNodeCount d) deleteFromEnd e) deleteFromBeg f)deleteFromPos g) reverseDisplay


#include <stdio.h>
#include <stdlib.h>

typedef struct node{
                  int data;
                  struct node  *next;
} node;

void insert(int x);
void displaylist();
int listnodecount();
void deletefromend();
void deletefrombeg();
void deletefrompos(int pos);
void reverse( struct node *current);

node *head = NULL;   //   head as a global variable

int main()
{
    int choice, ele, pos;
      while(1){
          printf("Enter your choice: \n");
          printf("Enter  1:Insert  2:Display List  3:Count Nodes  4:Delete from End  5:Delete from Beginning  \n");
          printf("Enter  6:Delete from Position  7:Reverse The List  8:Exit  \n");
          scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("Enter the element which to be inserted: ");
                scanf("%d", &ele);
                insert(ele);
                break;
            case 2:
                displaylist();
                break;
            case 3:
                listnodecount();
                break;
            case 4:
                deletefromend();
                break;
            case 5:
                deletefrombeg();
                break;
            case 6:
                printf("Enter that position where I want to delete: ");
                scanf("%d", &pos);
                deletefrompos(pos);
                break;
            case 7:
                printf("Reverse the list: ");
                reverse(head);
                printf("\n");
                break;
            case 8:
                exit(0);
                break;
            default:
                printf("Invalid \n");
                break;
        }
    }

    return 0;
}

struct node *createNode(int ele)       // Function to create a new node
{
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    if(newNode == NULL)
      { 
          return NULL;
      }
    newNode->data = ele;
    newNode->next = NULL;
    return newNode;
}

void insert(int x)        // Function to insert a node in sorted order
{
    struct node *newNode = createNode(x);

    if (head == NULL || x < head->data){       // Check if list is empty or new node value is smaller than head value
        newNode->next = head;
        head = newNode;
    } 
    else{
        struct node *current = head;
        while (current->next != NULL && x >= current->next->data){     // Find the appropriate position to insert the new node
                  current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
}

void displaylist()       // Function to display the list
{
    if(head == NULL){
         printf("List is empty.\n");
         return;
    }
    struct node *current = head;

    printf("-----Linked List-------\n ");
    while (current != NULL){
          printf("---%d ", current->data);
          current = current->next;
    }
    printf("\n");
}

int listnodecount()        // Function to count the number of nodes in the list
{
    int count = 0;
    struct node *current = head;
    while (current != NULL){
           count++;
           current = current->next;
    }
    printf("The no of nodes in this linked list = %d\n",count);
    return count ;
}

void deletefromend()         // Function to delete a node from the end of the list
{
    if(head == NULL){
            printf("Linked List is empty.\n");
            return;
    }
    struct node *current = head;
    struct node *prev = NULL;
    while (current->next != NULL){
           prev = current;
           current = current->next;
    }
    if(prev == NULL){
           head = NULL;
    } 
    else{
         prev->next = NULL;
    }
    free(current);
}

void deletefrombeg()      // Function to delete a node from the beginning of the list
{
    if(head == NULL){
        printf("Linked List is empty.\n");
        return;
    }
    struct node *current = head;
    head = head->next;
    free(current);
}

void deletefrompos(int pos)       // Function to delete a node from a specific position in the list
{
    int count = listnodecount();

    if(pos < 1 || pos > count){
           printf("Invalid position.\n");
           return;
    }
    if(pos == 1){
        deletefrombeg();
        return;
    }
    struct node *current = head;
    struct node *prev = NULL;

    for(int i=1; i<pos; i++){
           prev = current;
           current = current->next;
    }
    prev->next = current->next;
    free(current);
}

void reverse( struct node *current)       // Function to display the list in reverse order
{
    if(current == NULL){
        return;
    }
    reverse(current->next);
    printf("---%d \n", current->data);
}

