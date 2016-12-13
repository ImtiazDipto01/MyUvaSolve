#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
   int len,count,i,j,k,a,b,MS,PL,index;
   string s,s1,d;
   while(cin >> d)
   {
       s=d;
       s1=d;
       len=d.length();
       count=0;
       MS=0;
       index=0;
       PL=0;
       for(i=0;i<len;i++)
       {
           if(d[i]=='A')
           {
               d[i]='A';
               count++;
           }
           else if(d[i]=='E')
           {
               d[i]='3';
               count++;
           }
           else if(d[i]=='3')
           {
               d[i]='E';
               count++;
           }
           else if(d[i]=='H')
           {
               d[i]='H';
               count++;
           }
           else if(d[i]=='I')
           {
               d[i]='I';
               count++;
           }
           else if(d[i]=='J')
           {
               d[i]='L';
               count++;
           }
           else if(d[i]=='L')
           {
               d[i]='J';
               count++;
           }
           else if(d[i]=='M')
           {
               d[i]='M';
               count++;
           }
           else if(d[i]=='O')
           {
               d[i]='O';
               count++;
           }
           else if(d[i]=='S')
           {
               d[i]='2';
               count++;
           }
           else if(d[i]=='2')
           {
               d[i]='S';
               count++;
           }
           else if(d[i]=='T')
           {
               d[i]='T';
               count++;
           }
           else if(d[i]=='U')
           {
               d[i]='U';
               count++;
           }
           else if(d[i]=='V')
           {
               d[i]='V';
               count++;
           }
           else if(d[i]=='W')
           {
               d[i]='W';
               count++;
           }
           else if(d[i]=='X')
           {
               d[i]='X';
               count++;
           }
           else if(d[i]=='Y')
           {
               d[i]='Y';
               count++;
           }
           else if(d[i]=='Z')
           {
               d[i]='5';
               count++;
           }
           else if(d[i]=='5')
           {
               d[i]='Z';
               count++;
           }
           else if(d[i]=='1')
           {
               d[i]='1';
               count++;
           }
           else if(d[i]=='8')
           {
               d[i]='8';
               count++;
           }
           else
           {
               d[i]=d[i];
           }

       }
       reverse(s.begin(),s.end());
       if(s==s1)
       {
           PL=1;
       }
       if(d==s&&count==len)
       {
           MS=1;
       }
       if(PL==0&&MS==0)
       {
           cout<<s1<<" "<<"-- is not a palindrome."<<endl<<endl;

       }
       if(PL==1&&MS==0)
       {

           cout<<s1<<" "<<"-- is a regular palindrome."<<endl<<endl;
       }
       if(PL==0&&MS==1)
       {

           cout<<s1<<" "<<"-- is a mirrored string."<<endl<<endl;
       }
       if(PL==1&&MS==1)
       {
           cout<<s1<<" "<<"-- is a mirrored palindrome."<<endl<<endl;
       }
   }
   return 0;
}
