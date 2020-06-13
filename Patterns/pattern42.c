/*Output

    A
   CBA
  EDCBA
 GFEDCBA
IHGFEDCBA

*/

#include<stdio.h>

int main()
{
	int i,j,k,size,alpha,odd;
	
	odd=1;
	alpha=64;
	
	printf("Enter size of pattern=");
	scanf("%d",&size);
	
	for(i=1;i<=size;i++)
	{
		for(k=size;k>i;k--)
		{
			printf(" ");
		}
		for(j=alpha+odd;j>=65;j--)
		{
			printf("%c",j);
		}
		printf("\n");
		odd+=2;
	}
	
 return 0;
}