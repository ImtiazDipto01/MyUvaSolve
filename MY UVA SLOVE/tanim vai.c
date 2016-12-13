#include<stdio.h>
int main()
{
    int i,num,input, pos = 0, neg = 0;
    scanf("%d",&num);
    for(i = 1 ; i <= num ; i++)
    {
        scanf("%d",&input) ;
        if(0 <= input)
        {
            pos = 1 + pos ;
        }
        else
        {
            neg = 1 + neg ;
        }
    }
    printf("%d %d",pos,neg);
    return 0;
}
