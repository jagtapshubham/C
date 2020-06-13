/*Output

    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA

*/

#include<stdio.h>

int main()
{
	int i,j,k,size,alpha,odd=1;
	
	printf("Enter size of pattern=");
	scanf("%d",&size);
	
	for(i=1;i<=size;i++)			//for row printing
	{
		for(k=1;k<=size-i;k++)		//for space printing
		{
			printf(" ");
		}
		alpha=64;					//to print alphabet "ASCII value of '@' which is before 'A'"
		for(j=1;j<=odd;j++)			// for column printing
		{
			if(j<=i)				//for printing till half pyramid 'E'
			{
				alpha++;
				printf("%c",alpha);
			}
			else					//for printing after 'E' half pyramid 
			{
				alpha--;
				printf("%c",alpha);
			}
		}
		printf("\n");
		odd+=2;						// for printing column in odd manner 
	}
	
 return 0;
}