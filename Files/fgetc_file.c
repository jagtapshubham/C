#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp;
	char ch;

	fp=fopen("/home/shaby/demo.txt","r");
	if(fp==NULL)
	{
		printf("Unable to print\n");
		exit(1);
	}
	else
	{
		while((ch=fgetc(fp))!=EOF)
		{
			printf("%c",ch);
		}
		fclose(fp);
	}
}
