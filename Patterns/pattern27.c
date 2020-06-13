/*Output

    A
   BB
  CCC
 DDDD
EEEEE

*/

#include<stdio.h>

int main()
{
	int i,j,k,size,limit;
	
	printf("Enter size of pattern=");
	scanf("%d",&size);
	
	limit=65+size-1;
	
	for(i=65;i<=limit;i++)
	{
		for(k=1;k<=limit-i;k++)
		{
			printf(" ");
		}
		for(j=65;j<=i;j++)
		{
			printf("%c",i);
		}
	 printf("\n");
	}
	
 return 0;
}

