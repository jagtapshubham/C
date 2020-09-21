#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp1,*fp2;
	char ch;

	fp1=fopen("/home/shaby/demo.txt","r");
	fp2=fopen("abc.txt","w");
	
	if(fp1==NULL || fp2==NULL)
	{
		printf("Problem in file writing or reading\n");
		printf("Unable to continue\n");
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
