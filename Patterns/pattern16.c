/*Output
			11111
			2222
			333
			44
			5
*/

#include<stdio.h>

int main()
{
	int i,j,size;
	int k=1;
	
	printf("Enter size of pattern=");
	scanf("%d",&size);
	
	for(i=size;i>0;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",k);
		}
	 k++;	
	 printf("\n");
	}

 return 0;
}