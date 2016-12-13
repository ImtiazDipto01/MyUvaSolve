#include<iostream>
using namespace std;
int main()
{   long long int input,i,a[100000],index;
    while(1)
    {
        cin>>input;
        index=0;
        if(input==0)
        {
            cout<<input;
        }
        if(input<0)
        {
            break;
        }
        while(input!=0)
        {
            a[index++]=input%3;
            input=input/3;
        }
        for(i=index-1;i>=0;i--)
        {
            cout<<a[i];
        }
        cout<<endl;
    }
    return 0;
}
