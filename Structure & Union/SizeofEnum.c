#include<stdio.h>

enum SWITCH{flag};

int main()
{
	enum SWITCH s=flag;
	printf("The size of enumeration type switch is %ld\n",sizeof(enum SWITCH));
	printf("The size of enumeration type object s is %ld\n",sizeof(s));
	s=1;
	printf("%d\n",s);
}
