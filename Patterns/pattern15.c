/*Output
			*****
			****
			***
			**
			*
*/

#include<stdio.h>

int main()
{
	int i,j,size;
	
	printf("Enter size of pattern=");
	scanf("%d",&size);
	
	for(i=size;i>0;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
	 printf("\n");
	}
	
 return 0;
}