/*Output

    1
   123
  12345
 1234567
123456789

*/

#include<stdio.h>

int main()
{
	int i,j,k,size,odd=1;
	
	printf("Enter size of pattern=");
	scanf("%d",&size);
	
	for(i=1;i<=size;i++)
	{
		for(k=size;k>i;k--)		// for spacing
		{
			printf(" ");
		}
		for(j=1;j<=odd;j++)		//for printing
		{
			printf("%d",j);
		}
		printf("\n");
		odd+=2;					//odd=odd+2
	}
	
 return 0;
}