#include<iostream>
#include<string>
using namespace std;
int main()
{
    long int t,count=0,sum,n;
    string s;
    cin>>t;
    sum=0;
    while(1)
    {
        cin>>s;
        count++;
        if(s=="report")
        {
            cout<<sum<<endl;
        }
        else if(s=="donate")
        {
            cin>>n;
            sum=sum+n;
        }
        if(count==t)
        {
            break;
        }
    }
    return 0;
}
