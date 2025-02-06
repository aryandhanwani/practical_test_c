#include<stdio.h>

//enter all movies by taking input from user and display all

struct mov{
	char title[100];
	char genre[100];
	char lang[100];
};

int main()
{
	int size;
	int i;
	
	printf("enter the number of movies: ");
	scanf("%d", &size);
	
	struct mov mov[size];
	
	for(i=0;i<size;i++)
	{
		printf("Move Number: %d\n",i+1);
		
		printf("Title: ");
		scanf("%s",&mov[i].title);
		
		printf("Genre: ");
		scanf("%s",&mov[i].genre);
		
		printf("Language: ");
		scanf("%s", &mov[i].lang);
		
		printf("\n");
	}
	
	printf("Displaying all movies: \n");
	
	for(i=0;i<size;i++)
	{
		printf("Title: %s\n",mov[i].title);
		
		printf("Genre: %s\n",mov[i].genre);
		
		printf("Language: %s\n",mov[i].lang);
		
		printf("\n");
	}
	
}
