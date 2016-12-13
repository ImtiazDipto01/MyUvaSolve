#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int len,i;
    char d[1000];
    while(gets(d))
    {
        len=strlen(d);
        for(i=0;i<len;i++)
        {
             if(d[i]=='A')
            {
                printf("A");
            }
            else if(d[i]=='S')
            {
                printf("A");
            }
            else if(d[i]=='D')
            {
                printf("S");
            }
            else if(d[i]=='F')
            {
                printf("D");
            }
            else if(d[i]=='G')
            {
                printf("F");
            }
            else if(d[i]=='H')
            {
                printf("G");
            }
            else if(d[i]=='J')
            {
                printf("H");
            }
            else if(d[i]=='K')
            {
                printf("J");
            }
            else if(d[i]=='L')
            {
                printf("K");
            }
            else if(d[i]==';')
            {
                printf("L");
            }
            else if(d[i]=='\'')
            {
                printf(";");
            }
            else if(d[i]=='Z')
            {
                printf("Z");
            }
            else if(d[i]=='X')
            {
                printf("Z");
            }
            else if(d[i]=='C')
            {
                printf("X");
            }
            else if(d[i]=='V')
            {
                printf("C");
            }
            else if(d[i]=='B')
            {
                printf("V");
            }
            else if(d[i]=='N')
            {
                printf("B");
            }
            else if(d[i]=='M')
            {
                printf("N");
            }
            else if(d[i]==',')
            {
                printf("M");
            }
            else if(d[i]=='.')
            {
                printf(",");
            }
            else if(d[i]=='/')
            {
                printf(".");
            }
            else if(d[i]=='Q')
            {
                printf("Q");
            }
            else if(d[i]=='W')
            {
                printf("Q");
            }
            else if(d[i]=='E')
            {
                printf("W");
            }
            else if(d[i]=='R')
            {
                printf("E");
            }
            else if(d[i]=='T')
            {
                printf("R");
            }
            else if(d[i]=='Y')
            {
                printf("T");
            }
            else if(d[i]=='U')
            {
                printf("Y");
            }
            else if(d[i]=='I')
            {
                printf("U");
            }
            else if(d[i]=='O')
            {
                printf("I");
            }
            else if(d[i]=='P')
            {
                printf("O");
            }
            else if(d[i]=='[')
            {
                printf("P");
            }
            else if(d[i]==']')
            {
                printf("[");
            }
            else if(d[i]=='`')
            {
                printf("`");
            }
            else if(d[i]=='1')
            {
                printf("`");
            }
            else if(d[i]=='2')
            {
                printf("1");
            }
            else if(d[i]=='3')
            {
                printf("2");
            }
            else if(d[i]=='4')
            {
                printf("3");
            }
            else if(d[i]=='5')
            {
                printf("4");
            }
            else if(d[i]=='6')
            {
                printf("5");
            }
            else if(d[i]=='7')
            {
                printf("6");
            }
            else if(d[i]=='8')
            {
                printf("7");
            }
            else if(d[i]=='9')
            {
                printf("8");
            }
            else if(d[i]=='0')
            {
                printf("9");
            }
            else if(d[i]=='-')
            {
                printf("0");
            }
            else if(d[i]=='=')
            {
                printf("-");
            }
            else if(d[i]==' ')
            {
                printf(" ");
            }
            else if(d[i]=='\\')
            {
                printf("]");
            }
        }
        printf("\n");
    }
    return 0;
}
