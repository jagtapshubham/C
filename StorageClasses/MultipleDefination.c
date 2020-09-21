#include<stdio.h>

int a=10,b=20;
int main()
{
	printf("Global scope a & b=%d %d\n",a,b);
	{
		int a=30,b=40;
		printf("Local scope in main a & b=%d %d\n",a,b);
		{
			float a=30.5,b=40.5;
			printf("Local scope inside a scope a & b=%f %f\n",a,b);
		}
	}
}
