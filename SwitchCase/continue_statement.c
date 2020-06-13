#include<stdio.h>

int main()
{
	int i;
	
	for(i=1;i<=10;i++)
	{
		if(i%2==0)
			continue;		/* Continue Statement terminates the current iteration of loop */
		printf("i=%d\n",i);
	}

 return 0;
}