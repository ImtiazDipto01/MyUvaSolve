#include<iostream>
#include<string>
#include<stdio.h>

using namespace std;

int main()
{
    int count = 0 ;
    string s;
    while(cin >> s)
    {
        count++ ;
        if(s == "Hajj")
        {
            printf("Case %d: Hajj-e-Akbar\n",count);
        }
        else if(s == "Umrah")
        {
            printf("Case %d: Hajj-e-Asghar\n",count);
        }
        if(s == "*")
        {
            break;
        }
    }
    return 0;
}
