/*Output

    A
   BAB
  CBABC
 DCBABCD
EDCBABCDE

*/

#include<stdio.h>

int main()
{
	int i,j,k,l,size,alpha;
	
	alpha=64;			//ASCII value before "A"
	
	printf("Enter size of pattern=");
	scanf("%d",&size);
	
	for(i=1;i<=size;i++)			//for row shifting
	{
		for(k=1;k<=size-i;k++)		//for spacing
		{
			printf(" ");
		}
		for(j=alpha+i;j>alpha;j--)	//for printing till "A"
		{
			printf("%c",j);
		}
		for(l=alpha+2;l<=alpha+i;l++)	//for printing after "A"
		{
			printf("%c",l);
		}
		printf("\n");
	}
	
 return 0;
}