/*
	Title:  Find factorial of user entered no using while loop
	Author: Gaikwad Atul J.
	Date:   26/07/2016

*/
#include<stdio.h>
void main()
{
	int ifact,i;
	clrscr();
	printf("\nEnter the number\n");
	scanf("%d",&ifact);
	i=ifact-1;
	while(i>0)
	{
		ifact=ifact*i;
		i--;
	}
	printf("\nfactorial=%d",ifact);
	getch();

}