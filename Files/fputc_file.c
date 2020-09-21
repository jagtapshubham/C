#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp;
	char str[250];
	int i=0;

	fp=fopen("abc.txt","w");
	if(fp==NULL)
	{
		printf("Unable to create the file\n");
		exit(1);
	}
	else
	{
		printf("Enter the string you want to write to file:\n");
		gets(str);
		while((str[i])!='\0')
		{
			fputc(str[i++],fp);
		}
		fclose(fp);
	}
}
