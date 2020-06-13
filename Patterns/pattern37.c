/*Output

    A
   BBB
  CCCCC
 DDDDDDD
EEEEEEEEE

*/

#include<stdio.h>

int main()
{
	int i,j,k,size,alpha,odd=1;
	
	printf("Enter size of pattern=");
	scanf("%d",&size);
	
	alpha=65;
	
	for(i=1;i<=size;i++)
	{
		for(k=size;k>i;k--)
		{
			printf(" ");
		}
		for(j=1;j<=odd;j++)
		{
			printf("%c",alpha);
		}
		printf("\n");
		odd+=2;
		alpha++;
	}
	
 return 0;
}
		