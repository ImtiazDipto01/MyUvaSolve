#include<iostream>
#include<stdio.h>
using namespace std ;
int main()
{
    int a[100],n,index,r,count;
    while(1)
    {
        cin>>n;
        if(n==0)
        {
            break;
        }
        index=0;
        count = 0;
        while(n!=0)
        {
            a[index++]=n%2;
            n=n/2;
        }
        printf("The parity of ");
        for(r=index-1;r>=0;r--)
        {
            if(a[r]==1)
            {
                count++;
            }
            printf("%d",a[r]);
        }
        printf(" is %d (mod 2).\n",count);
    }
    return 0;
}
