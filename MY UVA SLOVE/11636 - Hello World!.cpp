#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    long int i,n,a,count,j;
    for(j=1;;j++)
    {
        cin>>n;
        a=1;
        count=0;
        if(n<0)
        break;

       while(a<n)
        {
            count++;
            a=a*2;

        }
        printf("Case %ld: %ld\n",j,count);
    }
    return 0;
}
