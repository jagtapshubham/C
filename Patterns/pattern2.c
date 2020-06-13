/* Output
			11111
			22222
			33333
			44444
			55555
*/


#include<stdio.h>

int main()
{
	int i,j,size;
	
	printf("Enter size of pattern=");
	scanf("%d",&size);
	
	for(i=1;i<=size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d",i);
		}
	 printf("\n");
	}
	
 return 0;
}