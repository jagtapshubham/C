#include<stdio.h>

int main()
{
	int A[20],B[20],C[40],i,j,l,m,n,h;
	
	printf("Enter size of array 1=");
	scanf("%d",&m);
	printf("Enter array 1 elements=");
	for(i=0;i<m;i++)
	{
		scanf("%d",&A[i]);
	}
	
	printf("Enter size of array 2=");
	scanf("%d",&n);
	printf("Enter array 2 elements=");
	for(i=0;i<n;i++)
	{
		scanf("%d",&B[i]);
	}
	
	i=0,j=0,h=0;
	
	while(i<m || j<n)
	{
		if(A[i]<=B[j])
		{
			C[h]=A[i];
			printf("a1=%d\n",A[i]);
			i++;
		}
		else
		{
			C[h]=B[j];
			printf("a2=%d\n",B[j]);
			j++;
		}
		h++;
	}
	if(i==m)
	{
		for(l=j;l<n;l++)
		{
			C[h++]=B[l];
		}
	}
	else if(j==n)
	{
		for(l=i;l<m;l++)
		{
			C[h++]=A[l];
		}
	}
	printf("\nAfter merging two arrays\n");
	for(i=0;i<m+n;i++)
	{
		printf("%d\n",C[i]);
	}
	
 return 0;
}