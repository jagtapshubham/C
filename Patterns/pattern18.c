/*Output
			AAAAA
			BBBB
			CCC
			DD
			E
*/
#include<stdio.h>

int main()
{
	int i,j,size,limit;
	int k=65;
	
	printf("Enter size of pattern=");
	scanf("%d",&size);
	
	limit=65+size-1;			// 65 is ASCII value of A 
	
	for(i=limit;i>=65;i--)
	{
		for(j=65;j<=i;j++)
		{
			printf("%c",k);
		}
	 k++;
	 printf("\n");
	}
	
 return 0;
}
	
	