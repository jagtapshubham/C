#include<stdio.h>

int main()
{
	printf("*****Data Types Size*****\n");
	printf("Character=%d\n",sizeof(char));
	printf("Integer=%d\n",sizeof(int));
	printf("Float=%d\n",sizeof(float));
	printf("Double=%d\n",sizeof(double));

	printf("Short int =%d\n",sizeof(short int));
	printf("long int=%d\n",sizeof(long int));
	printf("signed int=%d\n",sizeof(signed int));
	printf("unsigned int=%d\n",sizeof(unsigned int));
	printf("signed char=%d\n",sizeof(signed char));
	printf("unsigned char=%d\n",sizeof(unsigned char));
	printf("void=%d\n",sizeof(void));

 return 0;
}