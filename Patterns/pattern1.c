/*Output		
				*****
				*****
				*****
				*****
				*****
*/


#include<stdio.h>

int main()
{
	int i,j,size;
	
	printf("Enter Size of pattern=");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("*");
		}
	 printf("\n");
	}
	
 return 0;
}