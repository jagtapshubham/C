#include<stdio.h>
#include<stdlib.h>

int selectionsort(int noe,int num[])
{
	int i,j,temp;
	for(i=0;i<noe;i++)
	{
		for(j=i+1;j<noe;j++)
		{
			if(num[j]<num[i])
			{
				temp=num[i];
				num[i]=num[j];
				num[j]=temp;
			}
		}
	}	
}

int main()
{
	FILE *fp;
	int noe,i,num[20];
	
	fp=fopen("marks.txt","r");
	if(fp==NULL)
	{
		printf("Unable to open file\n");
		exit(1);
	}
	fscanf(fp,"%d",&noe);
	for(i=0;i<noe;i++)
	{
		fscanf(fp,"%d",&num[i]);
	}
	fclose(fp);
	selectionsort(noe,num);
	
	fp=fopen("marks.txt","a");
	
	if(fp==NULL)
	{
		printf("Unable to open file\n");
		exit(1);
	}
	fprintf(fp,"List of marks in sorted order is:\n");	
	for(i=0;i<noe;i++)
	{
		fprintf(fp,"%d ",num[i]);
	}
	fclose(fp);

}

