/*Output

*****
 ****
  ***
   **
    *
	
*/

#include<stdio.h>

int main()
{
	int i,j,k,size;
	
	printf("Enter size of pattern=");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		for(k=1;k<=i;k++)
		{
			printf(" ");
		}
		for(j=size;j>i;j--)
		{
			printf("*");
		}
	 printf("\n");
	}
	
 return 0;
}
