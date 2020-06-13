/*Output

*********
 *******
  *****
   ***
    *

*/

#include<stdio.h>

int main()
{
	int i,j,k,size,odd;
	
	printf("Enter size of pattern=");
	scanf("%d",&size);
	
	odd=size+(size-1);
	
	for(i=1;i<=size;i++)		// for row shifting
	{
		for(k=1;k<i;k++)		// for space insertion
		{
			printf(" ");
		}
		for(j=1;j<=odd;j++)		// for '*' insertion
		{
			printf("*");
		}
		printf("\n");
		odd-=2;					// for printing '*' in odd manner
	}
	
 return 0;
}