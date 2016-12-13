#include<stdio.h>
int main()
{
    int i,t,n,a[100000],index,j,k,temp,count;
    while(scanf("%d",&t)==1)
    {
        index=0;
        for(i=1;i<=t;i++)
        {
            scanf("%d",&n);
            a[index++]=n;
        }
        count=0;
        for(j=0;j<(index-1);j++)
        {
            for(k=0;k<(index-j-1);k++)
            {
                if(a[k]>a[k+1])
                {
                    temp=a[k];
                    a[k]=a[k+1];
                    a[k+1]=temp;
                    count++;
                }
            }
        }
        printf("Minimum exchange operations : %d\n",count);
    }
    return 0;
}
