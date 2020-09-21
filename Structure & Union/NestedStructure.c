#include<stdio.h>

struct name
{
	char first_name[20];
	char last_name[20];
};

struct phone_book
{
	struct name pname;
	long int mobile_no;
};

int main()
{
	struct phone_book p1,p2;
	printf("Enter details of first person\n");
	printf("Enter first name=");
	scanf("%s",p1.pname.first_name);
	printf("Enter last name=");
	scanf("%s",p1.pname.last_name);
	printf("Enter Mobile Number[10]=");
	scanf("%ld",&p1.mobile_no);
	printf("Enter details of second person\n");
	printf("Enter first name=");
	scanf("%s",p2.pname.first_name);
	printf("Enter last name=");
	scanf("%s",p2.pname.last_name);
	printf("Enter mobile number[10]=");
	scanf("%ld",&p2.mobile_no);
	
	printf("\nRecords in phone book\n");
	printf("--------------------------\n");
	printf("%s %s:\t%ld\n",p1.pname.first_name,p1.pname.last_name,p1.mobile_no);
	printf("%s %s:\t%ld\n",p2.pname.first_name,p2.pname.last_name,p2.mobile_no);
	
}
