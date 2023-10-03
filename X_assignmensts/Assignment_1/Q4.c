
// C Program to find out given Character is Vowel or not.
#include<stdio.h>
int main()
{
	char ch;
        printf("Enter character: ");
        scanf("%c",&ch);

	if((ch=='a')|| (ch=='e') || (ch=='i') || (ch=='o') || (ch=='u') || (ch=='A') || (ch=='E') || (ch=='I') || (ch=='O') || (ch=='U'))
	{
		printf("Vowels\n");
	}else{
		printf("Not Vowels\n");
	}
	
	return 0;
	
}

