/*Output

    1
   121
  12321
 1234321
123454321

*/

#include<stdio.h>

int main()
{
	int i,j,k,num,size,odd=1;
	
	printf("Enter size of pattern=");
	scanf("%d",&size);
	
	for(i=1;i<=size;i++)		//for row printing
	{
		for(k=1;k<=size-i;k++)	//for space printing
		{
			printf(" ");
		}
	
		for(j=1;j<=odd;j++)		//for column printing
		{
			if(j<=i)			//for printing till 5 of pyramid
			{
				printf("%d",j);
				num=j;
			}
			else				//for printing above 5 of pyramid
			{
				num--;
				printf("%d",num);
			}
		}
		printf("\n");
		odd+=2;					//for printing column in odd manner 
	}
	
 return 0;
}