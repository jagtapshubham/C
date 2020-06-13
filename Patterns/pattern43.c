/*Output

    0
   101
  21012
 3210123
432101234

*/

#include<stdio.h>

int main()
{
	int i,j,k,l,size;
	
	printf("Enter size of pattern=");
	scanf("%d",&size);
	
	for(i=size;i>=1;i--)
	{
		for(k=1;k<i;k++)		// for spacing
		{
			printf(" ");
		}
		for(j=size-i;j>=0;j--)	// for printing till 0 
		{
			printf("%d",j);
		}
		for(l=1;l<=size-i;l++)
		{
			printf("%d",l);
		}
		printf("\n");
	}
	
 return 0;
}