/******************************************************************************
 * Author      : Rishi suri & Atul Gaikward              *Date : 26/04/2023
 * Assigment   : Data structures -1                              
 * statement   : Q3(c)-  Allocate memory for array of structure variables dynamically 
			and access members of each element
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
struct person {
   int age;
   float weight;
   char name[30];
};
int main(){
   struct person *ptr;
   int i, n;
   printf("Enter the number of persons: ");
   scanf("%d", &n);
   
   /*allocating memory for n numbers of struct person*/
   ptr = (struct person*) malloc(n * sizeof(struct person));
   
   for(i = 0; i < n; ++i){
      printf("Enter name and age respectively: ");     // To access members of 1st struct person,
      scanf("%s %d", (ptr+i)->name, &(ptr+i)->age);    // ptr->name and ptr->age is used 			  
   }
   printf("Displaying Information: ");
   for(i = 0; i < n; ++i)
   {
      printf("Name: %s\tAge: %d\n", (ptr+i)->name, (ptr+i)->age);
   }
   free(ptr);
   return 0;
}

