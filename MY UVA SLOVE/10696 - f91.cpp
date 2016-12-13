#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    long int n,r;
    while(1)
    {
        cin>>n;
        if(n==0)
        break;
        else if(n<=100)
        {
            printf("f91(%ld) = 91\n",n);
        }
        else if(n>=101)
        {
            r=n-10;
            printf("f91(%ld) = %ld\n",n,r);
        }
    }
    return 0;
}

