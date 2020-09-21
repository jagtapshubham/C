#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp1,*fp2;
	long int loc1,loc2;
	char ch;

	fp1=fopen("demo.txt","r");
	fp2=fopen("abc.txt","a");

	if(fp1==NULL || fp2==NULL)
	{
		printf("Unable to read the file\n");
		exit(1);
	}
	else
	{
		loc1=ftell(fp1);
		loc2=ftell(fp2);
		printf("Initially indicator are located at %ld %ld\n",loc1,loc2);
		ch=fgetc(fp1);
		fputc('!',fp2);
		loc1=ftell(fp1);
		loc2=ftell(fp2);
		printf("After I/O, indicator move to the location %ld %ld\n",loc1,loc2);
		ch=fgetc(fp1);
		fputc('!',fp2);
		fgetpos(fp1,&loc1);
		fgetpos(fp2,&loc2);
		printf("Finally, indicator are at the location %ld %ld\n",loc1,loc2);	
	}
	fcloseall();
}
