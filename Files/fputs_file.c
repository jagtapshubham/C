#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp;

	fp=fopen("xyz.txt","w");
	int i;

	if(fp==NULL)
	{
		printf("Unable to create file\n");
		exit(1);
	}
	else
	{
		i=fputs("Hello Readers",fp);
		printf("The value returned by the function fputs is %d\n",i);
	}
	fclose(fp);
}
