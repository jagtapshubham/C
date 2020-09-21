#include<stdio.h>
#include<malloc.h>

int main()
{
	int *ptr,i;
	ptr=(int*)calloc(3,sizeof(int));
	for(i=0;i<3;i++)
	{
		ptr[i]=10*(i+1);
		printf("%d\t",ptr[i]);
	}
}
