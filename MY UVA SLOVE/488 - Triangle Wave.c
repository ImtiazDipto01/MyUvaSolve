#include<stdio.h>
int main()
{
    int i,b,j,m,a,t,n;
    scanf("%d",&t);

    for(b=1;b<=t;b++)
    {
        scanf("%d%d",&a,&n);
        if(b!=t&&n==0&&a==1)
        {
            printf("\n");
        }
        for(m=1;m<=n;m++)
    {
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    for(i=a-1;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    if(m!=n)
    {
        printf("\n");
    }

    }
    if(b==t)
    {
        break;
    }
    printf("\n");
}
 return 0;
}

