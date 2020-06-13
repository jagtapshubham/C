/*Output
			55555
			44444
			33333
			22222
			11111
*/

#include<stdio.h>

int main()
{
	int i,j,size;
	
	printf("Enter size of pattern=");
	scanf("%d",&size);
	
	for(i=size;i>0;i--)
	{
		for(j=0;j<size;j++)
		{
			printf("%d",i);
		}
	 printf("\n");
	}
	
 return 0;
}