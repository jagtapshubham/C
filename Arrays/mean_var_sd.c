#include<stdio.h>
#include<math.h>

int main()
{
	float elements[20],mean,sum,var,sd;
	int i,num;
	
	printf("Enter number of elements=");
	scanf("%d",&num);
	
	printf("Enter elements:\n");
	for(i=0;i<num;i++)
	{
		scanf("%f",&elements[i]);
	}
	for(i=0;i<num;i++)
	{
		sum+=elements[i];
	}
	mean=sum/(float)num;
	sum=0.0;
	for(i=0;i<num;i++)
	{
		sum+=(elements[i]-mean)*(elements[i]-mean);
	}
	var=sum/num;
	sd=sqrt(var);
	
	printf("Mean of elements is %f\n",mean);
	printf("Variance of elements is %f\n",var);
	printf("Standard Deviation of element is %f\n",sd);
	
 return 0;
}