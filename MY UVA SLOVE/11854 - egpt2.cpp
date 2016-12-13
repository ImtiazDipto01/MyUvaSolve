#include<iostream>
using namespace std ;
int main()
{
    long int a,b,c,i;
    for(i=1;;i++)
    {
        cin >> a >> b >> c ;
        if(a==0&&b==0&&c==0)
        {
            break ;
        }
        if(a*a + b*b == c*c || b*b + c*c == a*a || a*a + c*c == b*b)
        {
            cout << "right" << endl ;
        }
        else
        {
            cout << "wrong" << endl ;
        }
    }
    return 0;
}

