#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int t,count=0,len,i;
    char s[100];
    cin>>t;
    while(scanf("%s",&s)==1)
    {
        count++;
        len=strlen(s);
        if(len==5)
        {
            printf("3\n");
        }
        if(len==3)
        {
            for(i=0;i<len;i++)
            {
                if(s[i]=='o'&&s[i+1]=='n')
                {
                    printf("1\n");
                    break;
                }
                if(s[i]=='t'&&s[i+1]=='w')
                {
                    printf("2\n");
                    break;
                }
                if(s[i+1]=='n'&&s[len-1]=='e')
                {
                    printf("1\n");
                    break;
                }
                if(s[i+1]=='w'&&s[len-1]=='o')
                {
                    printf("2\n");
                    break;
                }
                if(s[i]=='o'&&s[len-1]=='e')
                {
                    printf("1\n");
                    break;
                }
                if(s[i]=='t'&&s[len-1]=='o')
                {
                    printf("2\n");
                    break;
                }

            }
        }
        if(t==count)
        {
            break;
        }
    }
    return 0;
}
