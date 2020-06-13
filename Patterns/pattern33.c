/*Output

ABCDE
 ABCD
  ABC
   AB
    A
	
*/

#include<stdio.h>

int main()
{
	int size,i,j,k,limit;
	
	printf("Enter size of pattern=");
	scanf("%d",&size);
	
	limit=65+size-1;
	for(i=limit;i>=65;i--)
	{
		for(k=limit;k>i;k--)
		{
			printf(" ");
		}
		for(j=65;j<=i;j++)
		{
			printf("%c",j);
		}
		printf("\n");
	}
	
 return 0;
}