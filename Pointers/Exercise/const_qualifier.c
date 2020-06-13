#include<stdio.h>

int main()
{
	int val=10;
	int a=20;

	const int *const ptr=&val;
	//ptr=&a;					// invalid
	printf("const int *const ptr=&val");
	printf("Value=%d\n",val);
	printf("Value by *ptr=%f\n",*ptr);
	
	int val=10;

	const int *ptr=&val;
	
	//*ptr=20;			// invalid
	printf("\nconst int *ptr=&val\n");
	printf("\nValue=%d\n",val);
	printf("Value by *ptr=%d\n",*ptr);

 return 0;
}