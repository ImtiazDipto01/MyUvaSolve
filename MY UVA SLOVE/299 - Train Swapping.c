#include<stdio.h>
int main()
{
    int t,t1,i,j,k,l,a[100000],index,count,n,temp;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&t1);
        count=0;
        index=0;
        for(l=1;l<=t1;l++)
        {
            scanf("%d",&n);
            a[index++]=n;
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
        }
        printf("Optimal train swapping takes %d swaps.\n",count);
    }
    return 0;
}


