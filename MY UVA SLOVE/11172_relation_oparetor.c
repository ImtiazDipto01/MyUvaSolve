#include<stdio.h>
int main()
{
    int a, i, c, d ;
    scanf("%d",&a) ;
    for(i = 1; i <= a; i++)
    {
        scanf("%d%d",&c,&d) ;

        if(c > d)
        {
            printf(">\n") ;
        }
        else if(c < d)
        {
            printf("<\n") ;

        }
        else
        {
            printf("=\n") ;
        }

    }

    return 0;

}
