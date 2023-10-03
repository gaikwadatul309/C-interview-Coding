// understanding memset ,memcp,memcmp
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
void *memcpy (void *dest,const void*src,size_t n);
int memcmp(const void *s1,const void *s2,size_t n);
void *memset(void *s,int c,size_t n);
int main(){
	char *cptr;
	cptr=malloc(10);
	char*ptr;
	ptr=memset(cptr,65,2);
	printf(" memset %s\n",cptr);
	printf("%s\n",ptr);
	
	//memcpy
	
//	char a[20],b[20];
//	char *ptr1;
//	scanf("%s",b);
//	ptr1=memcpy(a,b,10);
//	printf("memcpy%s\n",a);
//	printf("%s\n",ptr1);
	
       //memcmp

	char ch='a';
	 int i=97;
	 char * ptr3=&ch;
	 int *ptr2=&i;
	 int flag=memcmp(ptr3,ptr2,1);
	 printf("memcmp %d\n",flag);}
