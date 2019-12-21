#include<stdio.h>

int main()
{
	int num,i,int_size,ones_count,zeros_count;
	
	ones_count=0;
	zeros_count=0;
	int_size=sizeof(int)*8;
	
	printf("Enter number=");
	scanf("%d",&num);
	//printf("num=%d\n",int_size);
	
	for(i=0;i<int_size;i++)
	{
		//printf("num=%d\n",i);
		if(num&(1<<i))
			ones_count++;
		else
			zeros_count++;
	}
	printf("Ones count in number %d is %d\nZeros count in number %d is %d\n",num,ones_count,num,zeros_count);
	
 return 0;
}