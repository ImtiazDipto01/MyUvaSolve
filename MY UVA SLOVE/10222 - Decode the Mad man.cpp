#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int i,len;
    char d[1000];
    while(gets(d))
    {
        len=strlen(d);
        for(i=0;i<len;i++)
        {
            if(d[i]=='/')
            {
                printf(",");
            }
            else if(d[i]=='.')
            {
                printf("m");
            }
            else if(d[i]==',')
            {
                printf("n");
            }
            else if(d[i]=='m'||d[i]=='M')
            {
                printf("b");
            }
            else if(d[i]=='n'||d[i]=='N')
            {
                printf("v");
            }
            else if(d[i]=='b'||d[i]=='B')
            {
                printf("c");
            }
            else if(d[i]=='v'||d[i]=='V')
            {
                printf("x");
            }
            else if(d[i]=='c'||d[i]=='C')
            {
                printf("z");
            }
            else if(d[i]=='x'||d[i]=='X')
            {
                printf("\\");
            }
            else if(d[i]=='z'||d[i]=='Z')
            {
                printf("'");
            }
            else if(d[i]=='\'')
            {
                printf("l");
            }
            else if(d[i]==';')
            {
                printf("k");
            }
            else if(d[i]=='l'||d[i]=='L')
            {
                printf("j");
            }
            else if(d[i]=='k'||d[i]=='K')
            {
                printf("h");
            }
            else if(d[i]=='j'||d[i]=='J')
            {
                printf("g");
            }
            else if(d[i]=='h'||d[i]=='H')
            {
                printf("f");
            }
            else if(d[i]=='g'||d[i]=='G')
            {
                printf("d");
            }
            else if(d[i]=='f'||d[i]=='F')
            {
                printf("s");
            }
            else if(d[i]=='d'||d[i]=='D')
            {
                printf("a");
            }
            else if(d[i]=='s'||d[i]=='S')
            {
                printf("]");
            }
            else if(d[i]=='a'||d[i]=='A')
            {
                printf("[");
            }
            else if(d[i]==']')
            {
                printf("p");
            }
            else if(d[i]=='[')
            {
                printf("o");
            }
            else if(d[i]=='p'||d[i]=='P')
            {
                printf("i");
            }
            else if(d[i]=='o'||d[i]=='O')
            {
                printf("u");
            }
            else if(d[i]=='i'||d[i]=='I')
            {
                printf("y");
            }
            else if(d[i]=='u'||d[i]=='U')
            {
                printf("t");
            }
            else if(d[i]=='y'||d[i]=='y')
            {
                printf("r");
            }
            else if(d[i]=='t'||d[i]=='T')
            {
                printf("e");
            }
            else if(d[i]=='r'||d[i]=='R')
            {
                printf("w");
            }
            else if(d[i]=='e'||d[i]=='E')
            {
                printf("q");
            }
            else if(d[i]==' ')
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
