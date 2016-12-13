#include<stdio.h>
int main()
{
    int a,b,i,t,r;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d",&a,&b);
        r=(a/3)*(b/3);
        printf("%d\n",r);
    }
    return 0;
}
