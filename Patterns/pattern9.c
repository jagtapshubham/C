/*Output
		EDCBA
		EDCBA
		EDCBA
		EDCBA
		EDCBA
*/

#include<stdio.h>

int main()
{
	int i,j,size,limit;
	
	printf("Enter size of pattern=");
	scanf("%d",&size);
	
	limit=65+size-1;				// 65 is ASCII value of A 
	
	for(i=0;i<size;i++)
	{
		for(j=limit;j>=65;j--)
		{
			printf("%c",j);
		}
	 printf("\n");
	}
	
 return 0;
}