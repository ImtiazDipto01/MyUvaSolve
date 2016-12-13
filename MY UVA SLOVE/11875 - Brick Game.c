#include<stdio.h>
int main()
{
    int i,j,t1,t2,a[100];
    scanf("%d",&t1);
    for(i=1;i<=t1;i++)
    {
        scanf("%d",&t2);
        for(j=0;j<t2;j++)
        {
            scanf("%d",&a[j]);
        }
            if(t2==3)
            {
                printf("Case %d: %d\n",i,a[1]);
            }
            if(t2==5)
            {
                printf("Case %d: %d\n",i,a[2]);
            }
            if(t2==7)
            {
                printf("Case %d: %d\n",i,a[3]);
            }
            if(t2==9)
            {
                printf("Case %d: %d\n",i,a[4]);
            }
    }
    return 0;
}
