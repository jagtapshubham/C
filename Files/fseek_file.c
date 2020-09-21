#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp;
	char ch;

	fp=fopen("abc.txt","r+");

	if(fp==NULL)
	{
		printf("Unable to open file\n");
		exit(1);
	}
	else
	{
		fseek(fp,-9L,SEEK_END);
		fputc('1',fp);
		fseek(fp,0L,SEEK_SET);
		while((ch=fgetc(fp))!=EOF)
		{
			putchar(ch);
		}
	}
	fclose(fp);
}
