/*Output

1234567
 12345
  123
   1
   
*/

#include<stdio.h>

int main()
{
	int i,j,k,size,odd;
	
	printf("Enter size of pattern=");
	scanf("%d",&size);
	
	odd=size+(size-1);			//for assigning odd value
	
	for(i=0;i<size;i++)			//for row shifting
	{
		for(k=0;k<i;k++)		//for spacing
		{
			printf(" ");
		}
		for(j=1;j<=odd;j++)		//for printing 
		{
			printf("%d",j);
		}
		printf("\n");
		odd-=2;					//for changing odd value
	}
	
 return 0;
}