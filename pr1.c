#include<stdio.h>

//factorial using for loop

int main()
{
	int num,i;
	
	int fac=1;
	
	printf("Enter the number: ");
	scanf("%d", &num);
	
	for(i=1;i<=num;i++)
	{
		fac*=i;
	}
	
	printf("Factorial of %d is %d\n",num,fac);
}
