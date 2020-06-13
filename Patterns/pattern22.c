/*Output
			EEEEE
			DDDD
			CCC
			BB
			A
*/

#include<stdio.h>

int main()
{
	int i,j,size,limit;
	
	printf("Enter size of pattern=");
	scanf("%d",&size);
	
	limit=65+size-1;		// 65 is ASCII value of A 
	
	for(i=limit;i>=65;i--)
	{
		for(j=65;j<=i;j++)
		{
			printf("%c",i);
		}
	 printf("\n");
	}
	
 return 0;
}