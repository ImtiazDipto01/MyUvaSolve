#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
   int i,a,b,count,max,x,c;
    while(scanf("%d %d",&a,&b)==2)
    {
       max=0;
       printf("%d %d",a,b);

       if(a>b)
       {
           c=a;
           a=b;
           b=c;
       }
       for(i=a;i<=b;i++)
       {
            x=i;
            count =1;

           while(x>1)
           {
                if(x%2==1)
                {
                    x=(3*x)+1;
                    count++;
                }

               else if(x%2==0)
                {
                    x=x/2;
                    count++;
                }
           }

           if(count>max)
           max=count;
      }
   printf(" %d\n",max);
}
return 0;

}
