#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,a,b,count,max,d,f,temp,x;
    while(scanf("%d%d",&a,&b)==2)
    {
        max=0;
        d = a;
        f = b;
        if(a>b)
        {
            temp = a;
            a = b;
            b = temp;
        }
        for(i=a;i<=b;i++)
        {
            count=1;
            x=i;
            while(x>1)
            {
                if(x%2==0)
                {
                    x=x/2;
                    count++;
                }
                else if(x%2!=0)
                {
                    x=3*x+1;
                    count++;
                }

            }
            if(max<count)
            {
                max = count;
            }
        }
        printf("%d %d %d\n",d,f,max);
    }
    return 0;
}
