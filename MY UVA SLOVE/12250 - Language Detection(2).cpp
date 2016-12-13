#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main()
{
    string s;
    int count=0;
    while(1)
    {
        cin>>s;
        count++;
        if(s=="#")
        {
            break;
        }
        else if(s=="HELLO")
        {
            printf("Case %d: ENGLISH\n",count);
        }
        else if(s=="HOLA")
        {
            printf("Case %d: SPANISH\n",count);
        }
        else if(s=="HALLO")
        {
            printf("Case %d: GERMAN\n",count);
        }
        else if(s=="BONJOUR")
        {
            printf("Case %d: FRENCH\n",count);
        }
        else if(s=="CIAO")
        {
            printf("Case %d: ITALIAN\n",count);
        }
        else if(s=="ZDRAVSTVUJTE")
        {
            printf("Case %d: RUSSIAN\n",count);
        }

        else
        {
            printf("Case %d: UNKNOWN\n",count);
        }
    }
    return 0;
}
