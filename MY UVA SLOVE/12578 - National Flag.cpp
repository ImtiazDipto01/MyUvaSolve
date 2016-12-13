#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    double l,w,r,ans1,ans2;
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>l;
        r=(l*20)/100;
        w=(l*60)/100;
        ans1=(pow(r,2)*acos(-1));
        ans2=((l*w)-ans1);
        printf("%.2lf %.2lf\n",ans1,ans2);
    }
    return 0;
}
