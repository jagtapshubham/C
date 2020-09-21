#include<stdio.h>
#include<malloc.h>

int main()
{
	int *ptr,i;
	ptr=(int*)calloc(3,sizeof(int));
	for(i=0;i<=2;i++)
	{
		ptr[i]=10*(i+1);
		printf("%d ",*(ptr+i));
	}
	printf("\nAfter realloc adding 2 memory space to ptr \n");
	ptr=(int*)realloc(ptr,5*sizeof(int));
	ptr[3]=40;
	ptr[4]=50;
	for(i=0;i<=4;i++)
		printf("%d ",*(ptr+i));
	realloc(ptr,0);		// this is equivalent to free(ptr)
}
