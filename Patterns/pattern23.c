/*Output
			EDCBA
			EDCB
			EDC
			ED
			E
*/
#include<stdio.h>

int main()
{
	int i,j,size,limit;
	
	printf("Enter size of pattern=");
	scanf("%d",&size);
	
	limit=65+size-1;
	
	for(i=65;i<=limit;i++)
	{
		for(j=limit;j>=i;j--)
		{
			printf("%c",j);
		}
	 printf("\n");
	}
 
 return 0;
}