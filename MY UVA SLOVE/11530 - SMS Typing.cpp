#include<iostream>
#include<stdio.h>
#include<string.h>
#include<string>
using namespace std;
int main()
{
    int count=0,len,i,count2,t,j;
    string s;
   scanf("%d",&t);
   getline(cin,s);
   for(j=1;j<=t;j++)
   {
       count=0;
       getline(cin,s);
       len=s.length();

    for(i=0;i<len;i++)
    {

            if(s[i]=='a'||s[i]=='d'||s[i]=='g'||s[i]=='j'||s[i]=='m'||s[i]=='p'||s[i]=='t'||s[i]=='w'||s[i]==' ')
            {
                count=count+1;
            }
            else if(s[i]=='b'||s[i]=='e'||s[i]=='h'||s[i]=='k'||s[i]=='n'||s[i]=='q'||s[i]=='u'||s[i]=='x')
            {
                count=count+2;
            }
            else if(s[i]=='c'||s[i]=='f'||s[i]=='i'||s[i]=='l'||s[i]=='o'||s[i]=='r'||s[i]=='v'||s[i]=='y')
            {
                count=count+3;
            }
            else if(s[i]=='s'||s[i]=='z')
            {
                count=count+4;
            }
    }
    printf("Case #%d: %d\n",j,count);
   }
   return 0;
}
