#include<stdio.h>

int main()
{
    int t,s,input,i,j,max;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&s);
        max=0;
        for(j=1;j<=s;j++)
        {
            scanf("%d",&input);
            if(input>max)
            {
                max=input;
            }
        }
        printf("Case %d: %d\n",i,max);
    }
    return 0;
}
