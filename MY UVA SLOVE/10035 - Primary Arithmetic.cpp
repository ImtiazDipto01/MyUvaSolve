#include<iostream>
#include<stdio.h>

using namespace std;


int main()
{
    unsigned long a,b,c,count=0,x,y;
    {
        while(scanf("%lu %lu",&a,&b)==2)
        {
            int z=0;
            count=0;
            if(a==0&&b==0)
                break;

            while(a!=0||b!=0)
            {
                x=a%10;
                a=a/10;
                y=b%10;
                b=b/10;

                c=x+y+count;
                if(c<10)
                    count=0;
                if(c>9)
                {
                    count=1;
                    z++;
                }

            }
            if(z==0)
           printf("No carry operation.\n");
           else if(z==1)
           printf("%lu carry operation.\n",z);
           else
           printf("%lu carry operations.\n",z);



        }
    }


    return 0;
}
