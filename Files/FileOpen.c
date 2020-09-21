#include<stdio.h>

int main()
{
	int c;
	FILE *fp;
	fp=fopen("demo.txt","r");
	while(c!=EOF)
	{
		c=fgetc(fp);
		printf("%c",c);
	}
}
