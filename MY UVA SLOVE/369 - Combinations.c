#include<stdio.h>
long double fact(long double n)
{
long double i,r=1;
for(i=1;i<=n;i++)
{
r=r*i;
}
return (r);
}

int main()
{
while(1)
{

double N,C,M;
scanf("%lf %lf",&N,&M);
if(N==0&&M==0)
break;

C=fact(N)/(fact(M)*fact(N-M));
printf("%0.0lf things taken %0.0lf at a time is %0.0lf exactly.\n",N,M,C);
}


return 0;

}
