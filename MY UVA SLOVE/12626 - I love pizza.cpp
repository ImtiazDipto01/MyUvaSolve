#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int i,len,count=0,t,sum;
    int c1,c11,c2,c22,c3,c33,c4,c44,c5,c55,c6,c66;
    char d[1000];
    cin>>t;
    while(scanf("%s",&d)==1)
    {
        len=strlen(d);
        count++;
        sum=c1=c11=c2=c22=c3=c33=c4=c44=c5=c55=c6=c66=0;
        for(i=0;i<len;i++)
        {
            if(d[i]=='M')
            {
                c1++;
            }
            else if(d[i]=='A')
            {
                c2++;
                if(c2==3)
                {
                    c22++;
                    c2=0;
                }
            }
            else if(d[i]=='R')
            {
                c3++;
                if(c3==2)
                {
                    c33++;
                    c3=0;
                }
            }
            else if(d[i]=='T')
            {
                c4++;
            }
            else if(d[i]=='I')
            {
                c5++;
            }
            if(d[i]=='G')
            {
                c6++;
            }
        }
        sum=sum+c1+c22+c33+c4+c5+c6;
        int count9=0;
        for(int j = 1; j<=sum;j++)
        {
            if(c1>0&&c22>0&&c33>0&&c4>0&&c5>0&&c6>0)
            {
                count9++;
                c1--;
                c22--;
                c33--;
                c4--;
                c5--;
                c6--;
            }

            else
            {
                break;
            }
        }
        cout<<count9<<endl;
        if(count==t)
        {
            break;
        }
    }
    return 0;
}
