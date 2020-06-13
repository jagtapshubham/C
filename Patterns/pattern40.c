/*Output

    1
   321
  54321
 7654321
987654321

*/

#include<stdio.h>

int main()
{
	int i,j,k,odd=1,size;
	
	printf("Enter size of pattern=");
	scanf("%d",&size);
	
	for(i=1;i<=size;i++)
	{
		for(k=size;k>i;k--)		//for spacing
		{
			printf(" ");
		}
		for(j=odd;j>=1;j--)		//for printing		
		{
			printf("%d",j);
		}
		printf("\n");
		odd+=2;					//odd=odd+2
	}
	
 return 0;
}