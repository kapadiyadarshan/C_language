#include<stdio.h>
#include<string.h>

// C program to check whether a string is palindrome or not.

int main()
{
	char A[200],B[200];
	printf("Enter Any String\n");
	gets(A);

	strcpy(B,A);

	strrev(B);

	if(strcmp(A,B)==0)
	{
		printf("String is palindrome...");
	}
	else
	{
		printf("String is not palindrome...");
	}
	return 0;
}