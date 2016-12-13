#include<iostream>
using namespace std;
int main()
{
    int i,sum,input;
    while(1)
    {
        cin>>input;
        sum=0;
        if(input==0)
        {
            break;
        }
        for(i=1;i<=input;i++)
        {
            sum=sum+(i*i);
        }
        cout<<sum<<endl;
    }
    return 0;
}
