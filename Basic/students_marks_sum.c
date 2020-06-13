#include<stdio.h>

int main()
{
        int array[100],i,num,sum_boys=0,sum_girls=0;
        char gender;

        scanf("%d",&num);
        for(i=0;i<num;i++)
        {
                scanf("%d",&array[i]);
        }
        printf("Gender");
        scanf(" %c",&gender);

        for(i=0;i<num;i++)
        {
                if(i%2==0)
                {
                        sum_boys += array[i];
                }
                else
                {
                        sum_girls += array[i];
                }
        }
	
	 if(gender=='b')
        {
                printf("Boys marks sum=%d\n",sum_boys);
        }
        else
        {
                printf("Girls marks sum=%d\n",sum_girls);
        }

 return 0;
}