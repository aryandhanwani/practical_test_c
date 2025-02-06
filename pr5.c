#include<stdio.h>

//swap the integer using pointer

void swap(int *p, int *q);

int main()
{
	int *p;
	int *q;
	int a,b;
	
	printf("enter the first number: ");
	scanf("%d", &a);
	
	printf("enter the second number: ");
	scanf("%d", &b);
	
	p=&a;
	q=&b;
	
	swap(&p,&q);
}

void swap (int *p, int *q)
{
	int temp;
	
	temp=*p;
	*p=*q;
	*q=temp;
	
	printf("After swapping\n");
	
	printf("First number is %d\n", *p);
	printf("Second number is %d\n",*q);
	
	return 0;
}
