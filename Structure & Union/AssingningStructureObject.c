#include<stdio.h>
struct book
{
	char title[25];
	char author[25];
	int price;
};

int main()
{
	// Initializing a structure variable by providing an initialization list
	struct book b1={"C programming","Dennis Ritchie",250};

	// Initializing a Structure variable with another structure variable
	struct book b2=b1;

	printf("%s by %s is of %d Rupees\n",b1.title,b1.author,b1.price);
	printf("%s by %s is of %d Ruppes\n",b2.title,b2.author,b2.price);
}
