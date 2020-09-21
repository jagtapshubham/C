#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp1,*fp2;
	char ch;

	fp1=fopen("demo.txt","r");
	fp2=fopen("/home/shaby/demo.txt","a");

	if(fp1==NULL || fp2==NULL)
	{
		printf("Their is problem in Reading or writing\n");
		printf("Cannot continue\n");
		exit(1);
	}
	else
	{
		while((ch=fgetc(fp1))!=EOF)
		{
			fputc(ch,fp2);
		}
		fcloseall();
	}
}
