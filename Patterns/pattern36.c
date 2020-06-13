/*Output

    1
   333
  55555
 7777777
999999999

*/

#include<stdio.h>
int main()
{
	int i,j,k,size,odd=1;
	
	printf("Enter size of pattern=");
	scanf("%d",&size);
	
	for(i=1;i<=size;i++)
	{
		for(k=size;k>i;k--)
		{
			printf(" ");
		}
		for(j=1;j<=odd;j++)
		{
			printf("%d",odd);
		}
		printf("\n");
		odd+=2;
	}
	
 return 0;
}