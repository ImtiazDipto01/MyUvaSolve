#include<stdio.h>
int main()
{
    long int a,b,i,temp,d,f,x,count,max,last_number;
    while(1)
    {
        scanf("%ld %ld",&a,&b);
        if(a==0&&b==0)
        break;

        if(a>b)
        {
           temp=a;
           a=b;
           b=temp;
        }
        d=a;
        f=b;
        max=0;
        for(i=a;i<=b;i++)
       {
           count=0;
           x=i;
           if(x==1)
           {
               x=3*x+1;
               count++;
           }
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
           if(count>max)
           {
               max=count;
               last_number=i;
           }

       }
       printf("Between %ld and %ld, %ld generates the longest sequence of %ld values.\n",d,f,last_number,max);
    }
    return 0;
}
