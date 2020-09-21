#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp;
	long int location;
	char ch;

	fp=fopen("xyz.txt","r+");

	if(fp==NULL)
	{
		printf("Unable to open file\n");
		exit(1);
	}
	else
	{
		fgetpos(fp,&location);
		location+=18;
		fsetpos(fp,&location);
		fputs("25",fp);
		location=0;
		fsetpos(fp,&location);
		while((ch=fgetc(fp))!=EOF)
		{
			putchar(ch);
		}
	}
	fclose(fp);
}	
