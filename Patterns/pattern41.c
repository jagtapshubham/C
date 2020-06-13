/*Output

    A
   ABC
  ABCDE
 ABCDEFG
ABCDEFGHI

*/

#include<stdio.h>

int main()
{
	int i,j,k,alpha,size,odd;
	
	odd=1;
	
	printf("Enter size of pattern=");
	scanf("%d",&size);
	
	for(i=1;i<=size;i++)
	{
		alpha=65;
		for(k=size;k>i;k--)			//for spacing
		{
			printf(" ");
		}
		for(j=1;j<=odd;j++)		//for alphabet printing
		{
			printf("%c",alpha);
			alpha++;
		}
		printf("\n");
		odd+=2;
	}
	
 return 0;
}