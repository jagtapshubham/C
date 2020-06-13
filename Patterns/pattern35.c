/*Output

    1
   222
  33333
 4444444
555555555

*/

#include<stdio.h>

int main()
{
	int i,j,k,size,odd=1,num=1;
	
	printf("Enter size of pattern=");
	scanf("%d",&size);
	
	for(i=size;i>0;i--)
	{
		for(k=1;k<i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=odd;j++)
		{
			printf("%d",num);
		}
		printf("\n");
		odd+=2;
		num++;
	}
	
 return 0;
}