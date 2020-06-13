/*Output
			ABCDE
			ABCDE
			ABCDE
			ABCDE
			ABCDE
*/

#include<stdio.h>

int main()
{
	int i,j,size;
	int limit;
	
	printf("Enter size of pattern=");
	scanf("%d",&size);
	
	limit=65+size;				// 65 is ASCII value of A 
	for(i=0;i<size;i++)
	{
		for(j=65;j<limit;j++)
		{
			printf("%c",j);
		}
	 printf("\n");
	}

 return 0;
}