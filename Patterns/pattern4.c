/*Output
			AAAAA
			BBBBB	
			CCCCC
			DDDDD
			EEEEE
*/

#include<stdio.h>

int main()
{
	int i,j,size;
	
	printf("Enter size of pattern=");
	scanf("%d",&size);
	
	int limit=65+size;				// 65 is ASCII value of A 
	for(i=65;i<limit;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%c",i);
		}
	 printf("\n");
	}

 return 0;
}