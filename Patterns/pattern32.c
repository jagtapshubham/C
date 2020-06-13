/*Output

EEEEE
 DDDD
  CCC
   BB
    A
	
*/

#include<stdio.h>

int main()
{
	int size,i,j,k,limit,space;
	
	printf("Enter size of pattern=");
	scanf("%d",&size);
	
	limit=65+size-1;
	
	space=0;
	for(i=limit;i>=65;i--)
	{
		for(k=0;k<space;k++)
		{
			printf(" ");
		}
		for(j=65;j<=i;j++)
		{
			printf("%c",i);
		}
		printf("\n");
		space++;
	}
	
 return 0;
}