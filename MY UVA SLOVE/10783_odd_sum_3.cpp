#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int a,b,c,i,j;
    cin >> c ;
    for(j=1;j<=c;j++)
    {
        cin >> a >> b;
        int sum = 0;
        for(i=a;i<=b;i++)
        {
            if(i%2!=0)
            {

                 sum = sum + i;
            }
        }
        printf("Case %d: %d\n",j,sum) ;
    }
    return 0;
}
