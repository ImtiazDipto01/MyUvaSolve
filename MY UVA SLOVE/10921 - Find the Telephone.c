#include<stdio.h>
#include<string.h>
int main()
{
    int i,len;
    char d[10000];
    while(scanf("%s",&d)==1)
    {
        len=strlen(d);
        for(i=0;i<len;i++)
        {
            if(d[i]=='A'||d[i]=='B'||d[i]=='C')
            {
                printf("2");
            }
            else if(d[i]=='D'||d[i]=='E'||d[i]=='F')
            {
                printf("3");
            }
            else if(d[i]=='G'||d[i]=='H'||d[i]=='I')
            {
                printf("4");
            }
            else if(d[i]=='J'||d[i]=='K'||d[i]=='L')
            {
                printf("5");
            }
            else if(d[i]=='M'||d[i]=='N'||d[i]=='O')
            {
                printf("6");
            }
            else if(d[i]=='P'||d[i]=='Q'||d[i]=='R'||d[i]=='S')
            {
                printf("7");
            }
            else if(d[i]=='T'||d[i]=='U'||d[i]=='V')
            {
                printf("8");
            }
            else if(d[i]=='W'||d[i]=='X'||d[i]=='Y'||d[i]=='Z')
            {
                printf("9");
            }
            else
            {
                printf("%c",d[i]);
            }

        }
        printf("\n");
    }
    return 0;
}
