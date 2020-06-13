/*Output
			54321
			5432
			543
			54
			5
*/

#include<stdio.h>

int main()
{
	int i,j,size;
	
	printf("Enter size of pattern=");
	scanf("%d",&size);
	
	for(i=1;i<=size;i++)
	{
		for(j=size;j>=i;j--)
		{
			printf("%d",j);
		}
	 printf("\n");
	}

 return 0;
}