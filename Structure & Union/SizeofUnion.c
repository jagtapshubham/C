#include<stdio.h>

union variable
{
	char a;
	int b;
	float c;
	double d;
};

int main()
{
	union variable var;
	printf("Sizeof union variable=%d bytes\n",sizeof(union variable));
	printf("Sizeof var %d bytes\n",sizeof(var));
}
