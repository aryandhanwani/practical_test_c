#include<stdio.h>

//take input from a file and capitalize it and write in another file

int main()
{
	FILE *fp
	char ch[100];
	fp=open("first.txt","r")
	
	fgets(ch,100,fp);
	
	printf("Capitalizing\n");
	
	printf("%s", ch-32);
	
	{
		FILE *pq
		
		pq=fopen("second.txt","w");
		
		fprintf(pq,"%s",fp);
		
		printf("written done");
		
		fclose(pq);
	}
	
	fclose(fp);
	
	return 0;
	
}
