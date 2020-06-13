/*Output

    A
   CCC
  EEEEE
 GGGGGGG
IIIIIIIII

*/

#include<stdio.h>

int main()
{
	int i,j,k,size,odd=1,alpha;
	
	alpha=65;
	printf("Enter size of pattern=");
	scanf("%d",&size);
	
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
		alpha+=2;
	}
	
 return 0;
}