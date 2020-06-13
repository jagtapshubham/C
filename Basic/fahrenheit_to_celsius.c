#include<stdio.h>

int main()
{
	float fahrenheit,celsius;
	
	printf("Enter Fahrenheit temprature=");
	scanf("%f",&fahrenheit);
	
	celsius=5.0/9.0*(fahrenheit-32);
	printf("Celsius=%f\n",celsius);

 return 0;
}