#include<stdio.h>

int main()
{
	printf("\a");		// generates a beep
	printf("\n");		// new line character
	printf("\'");		// prints '			
	printf("\"");		// prints "
	printf("\?");		// prints ?
	printf("\\");		// prints \	
//	printf("\b");		// moves cursor one position back
//	printf("\f");		// moves cursor to beginning of next page
//	printf("\r");		// moves cursor to beginning of next line
	printf("\t");		// inserts tab
//	printf("\v");		// vertical tab
	printf("\0");		// null character

 return 0;
}