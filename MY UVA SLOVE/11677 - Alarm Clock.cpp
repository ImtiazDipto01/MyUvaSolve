#include<iostream>
using namespace std;
int main()
{
    int h1,m1,h2,m2,R;
    while(1)
    {
        cin>>h1>>m1>>h2>>m2;
        if(h1==0&&h2==0&&m1==0&&m2==0)
        {
            break;
        }
        if(h1<h2)
        {
            R=h2-h1;
            R=R*60;
            R=(R-m1)+m2;
        }
        else if(h1==h2&&m1<m2)
        {
            R=m2-m1;
        }
        else if(h1==h2&&m1>m2)
        {
            R=(24-h1)+h2;
            R=R*60;
            R=(R-m1)+m2;
        }
        else if(h1>h2)
        {
            R=24-h1;
            R=(60*R)-m1;
            if(h2==0)
            {
                R=R+m2;
            }
            else
            {
                R=(h2*60)+m2+R;
            }
        }
        cout<<R<<endl;
    }
    return 0;
}
