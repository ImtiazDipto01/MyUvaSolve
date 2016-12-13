#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int temp,sum,len,i,j,f=1;
    char d[20];
    while(scanf("%s",&d)==1)
    {
        len=strlen(d);
        sum=0;
        for(i=0;i<len;i++)
        {
            temp=d[i];
            if(temp>=65&&temp<=90)
            {
                temp=temp-38;
                sum=sum+temp;
            }
            else if(temp>=97&&temp<=122)
            {
                temp=temp-96;
                sum=sum+temp;
            }
        }
        for(j=2;j<sum;j++)
        {
            if(sum%j==0)
            {
                f=2;
                printf("It is not a prime word.\n");
                break;
            }
        }
        if(f==1)
        {
            printf("It is a prime word.\n");
        }
        else
        {
            f=1;
        }
    }
    return 0;
}
