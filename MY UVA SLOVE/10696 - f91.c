#include<stdio.h>

int main()
{
    long int i,j,num,sum=0;
    while(scanf("%ld",&num)==1)
    {
        if(num==0)
        break;
        if(num<=100)
        {
            printf("f91(%ld) = 91\n",num);
        }
        else if(num>=101)
        {
            printf("f91(%ld) = %ld\n",num,num-10);
        }
    }
    return 0;
}
