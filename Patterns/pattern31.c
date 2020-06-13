/*Output

12345
 1234
  123
   12
    1
	
*/

#include<stdio.h>

int main()
{
	int i,j,k,size;
	
	printf("Enter size of pattern=");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		for(k=0;k<i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=size-i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	
 return 0;
}