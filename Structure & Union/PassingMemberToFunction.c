#include<stdio.h>

struct complex
{
	int re;
	int im;
};

int add_complex(int,int,int,int);
int mult_complex(int*,int*,int*,int*);

int main()
{
	struct complex no1,no2;
	printf("Enter the real and imaginary parts for 1st number=");
	scanf("%d%d",&no1.re,&no1.im);
	printf("Enter the real and imaginary parts for 2nd number=");
	scanf("%d%d",&no2.re,&no2.im);
	add_complex(no1.re,no1.im,no2.re,no2.im);
	mult_complex(&no1.re,&no1.im,&no2.re,&no2.im);
}

int add_complex(int a,int b,int c,int d)
{
	if((b+d)<0)
		printf("The result of their addition is %d%di\n",a+c,b+d);
	else
		printf("The result of their addition is %d+%di\n",a+c,b+d);
}

int mult_complex(int *a,int *b,int *c,int *d)
{
	int re,im;
	re=(*a)*(*c)-(*b)*(*d);
	im=(*a)*(*d)+(*b)*(*c);
	if(im<0)
		printf("The result of their multiplication is %d%di\n",re,im);
	else
		printf("The result of their multiplication is %d+%di\n",re,im);
}
