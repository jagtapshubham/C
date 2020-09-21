#include<stdio.h>
#include<stdlib.h>

struct name
{
	char first_name[20];
	char last_name[20];
};
struct phonebook
{
	struct name person_name;
	char mobile_no[15];
};

int main()
{
	struct phonebook p;
	FILE *fp;
	char ch;

	fp=fopen("phonebook.txt","wb+");

	if(fp==NULL)
	{
		printf("Some problem occured\n");
		printf("Unable to continue\n");
		exit(1);
	}
	while(1)
	{
		printf("Enter the details of person\n");
		printf("Enter first name of person:");
		gets(p.person_name.first_name);
		printf("Enter last name of person:");
		gets(p.person_name.last_name);
		printf("Enter mobile number:");
		gets(p.mobile_no);
		fwrite(&p,sizeof(p),1,fp);
		printf("Do you want to enter more records(Y/N):");
		scanf("%c",&ch);
		fflush(stdin);
		if(ch!='Y' || ch!='y')
		{
			break;
		}
	}
	rewind(fp);
	printf("\n\nPhonebook entires present in file are:\n");
	printf("%-20s%-20s%-15s\n","FIRST NAME","LAST NAME","MOBILE NUMBER");
	printf("------------------------------------------------------------------------\n");
	while(!feof(fp))
	{
		fread(&p,sizeof(p),1,fp);
		if(feof(fp))
		{
			break;
		}
		else
		{
			printf("%-20s%-20s%-15s\n",p.person_name.first_name,p.person_name.last_name,p.mobile_no);
		}
	}
	fclose(fp);
}
