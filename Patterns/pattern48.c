/*Output

555555555
 4444444
  33333
   222
    1

*/

#include<stdio.h>

int main()
{
	int i,j,k,size,odd;
	
	printf("Enter size of pattern=");
	scanf("%d",&size);
	
	odd=size+(size-1);
	
	for(i=0;i<size;i++)			// for row shifting
	{
		for(k=0;k<i;k++)		// for space insertion
		{
			printf(" ");
		}
		for(j=1;j<=odd;j++)		// for number insertion
		{
			printf("%d",size-i);
		}
		printf("\n");
		odd-=2;					// print number in odd manner 
	}
	
 return 0;
}