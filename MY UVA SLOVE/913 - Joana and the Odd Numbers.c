#include<stdio.h>
int main()
{
    long int input,sum,a,b,sum2=0,c;
    while(scanf("%ld",&input)==1)
    {
        sum=0;
        if(input==3||input==5)
        {
            sum=((input*(input-1))+(input*input));
            printf("%ld\n",sum);
        }
        else
        {
            sum=((input+input)*3);
            a=input-3;
            b=((input/2)+(input%2));
            c=((a*b)*3);
            sum=((sum+c)-3);
            printf("%ld\n",sum);
        }
    }
    return 0;
}
