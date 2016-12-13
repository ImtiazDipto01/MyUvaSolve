#include<stdio.h>
int main()
{
    int i,sum,n,count=0;
    while(1)
    {
        sum=0;
        scanf("%d",&n);
        if(n==0)
        {
            printf("END OF OUTPUT\n");
            break;
        }
        if(count==0)
        {
            printf("PERFECTION OUTPUT\n");
        }
        count++;
        for(i=1;i<n;i++)
        {
            if(n%i==0)
            {
                sum=sum+i;
            }
        }

        if(sum==n)
        {
            printf("%5d  PERFECT\n",n);
        }
        if(sum>n)
        {
            printf("%5d  ABUNDANT\n",n);
        }
        if(sum<n)
        {
            printf("%5d  DEFICIENT\n",n);
        }
    }
    return 0;
}
