#include<stdio.h>

struct variable
{
	char a;
	int b;
	float c;
	double d;
};

int main()
{
	struct variable var;
        printf("Sizeof struct variable %d bytes\n",sizeof(struct variable));
	printf("Sizeof var %d bytes\n",sizeof(var));
}	
