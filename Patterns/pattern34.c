/*Output

    *
   ***
  *****
 *******
*********

*/

#include<stdio.h>

int main()
{
	int i,j,k,odd=1,size;
	
	printf("Enter size of pattern=");
	scanf("%d",&size);
	
	for(i=size;i>0;i--)
	{
		for(k=1;k<i;k++)		// for spacing
		{
			printf(" ");
		}
		for(j=1;j<=odd;j++)		//for printing
		{
			printf("*");
		}
		printf("\n");
		odd+=2;					//odd=odd+2
	}
	
 return 0;
}