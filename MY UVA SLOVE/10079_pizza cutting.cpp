#include<iostream>
using namespace std ;
int main()
{
    long int n, piz;
    while(1)
    {
        cin >> n ;
        if(n<0)
        {
            break;
        }

        piz = (n*(n+1)/2)+1 ;
        cout << piz << endl ;

    }
    return 0 ;
}
