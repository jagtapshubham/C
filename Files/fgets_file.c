#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp;
	char str[300],*p;

	fp=fopen("demo.txt","r");
	p=fgets(str,280,fp);
	printf(str);
}
