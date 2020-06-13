/*Output
			54321
			54321
			54321
			54321
			54321
*/

#include<stdio.h>

int main()
{
	int i,j,size;
	
	printf("Enter size of pattern=");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		for(j=size;j>0;j--)
		{
			printf("%d",j);
		}
	 printf("\n");
	}
	
 return 0;
}