/*Output

55555
 4444
  333
   22
    1
	
*/

#include<stdio.h>

int main()
{
	int i,j,k,size;
	
	printf("Enter size of pattern=");
	scanf("%d",&size);
	
	for(i=size;i>=1;i--)
	{
		for(k=size;k>i;k--)
		{
			printf(" ");
		}
		for(j=0;j<i;j++)
		{
			printf("%d",i);
		}
	 printf("\n");
	}
	
 return 0;
}
