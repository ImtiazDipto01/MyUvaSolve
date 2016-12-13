#include<iostream>
#include<stdio.h>
using namespace std ;

int main()
{
    int m,n,r ;
    while(scanf("%d %d",&m,&n)!=EOF)
    {
        r = (m*n)-1 ;
        cout << r << endl ;
    }
    return 0;
}
