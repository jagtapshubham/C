#include<stdio.h>
#include<stdlib.h>

int main()
{
	char arr[30];
	setvbuf(stdout,arr,_IOFBF,30);
	puts("Fairways are narrow");
	fflush(stdout);
	puts("you have to walk down");
	puts("them in a single file");
	fclose(stdout);	
}

