/*Output
			12345
			12345
			12345
			12345
			12345
*/

#include<stdio.h>

int main()
{
	int i,j,size;
	
	printf("Enter size of pattern=");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		for(j=1;j<=size;j++)
		{
			printf("%d",j);
		}
	 printf("\n");
	}
	
 return 0;
}