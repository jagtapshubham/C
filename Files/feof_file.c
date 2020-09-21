#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp1,*fp2;
	char ch;

	fp1=fopen("abc.txt","r");
	fp2=fopen("xyz.txt","w");

	if(fp1==NULL || fp2==NULL)
	{
		printf("Problem in reading or writing a file\n");
		exit(1);
	}
	else
	{
		while(!feof(fp1))
		{
			ch=fgetc(fp1);
			fputc(ch,fp2);
		}
		fcloseall();
	}
}
