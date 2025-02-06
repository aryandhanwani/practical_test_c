#include<stdio.h>

//find the year is leap year or not

void year(int ent);

int main()
{
	int ent;
	
	printf("enter the year: ");
	scanf("%d", &ent);
	
	year(ent);
	
}

void year(int ent)
{
	if(ent%4==0)
	{
		printf("Year is a leap year\n");
	}
	else
	{
		printf("Year is not a leap year\n");
	}
	
}
