#include<stdio.h>

//find vowels character counts

void count(char *vowels[50]);

int main()
{
	char *vowels[50];
	
	printf("Enter the String: ");
	scanf("%s",&*vowels);
	
	count(&vowels[50]);
}

void count(char *vowels[50])
{
	int count=0;
	
	if(*vowels[i]=='a'||*vowels[i]=='e'||*vowels[i]=='i'||*vowels[i]=='o'||*vowels[i]=='u'||*vowels[i]=='A'||*vowels[i]=='E'||*vowels[i]=='I'||*vowels[i]=='O'||*vowels[i]=='U')
	{
		count++;
	}
	
	printf("Vowels count are: %d\n", count);
	
	return 0;
}
