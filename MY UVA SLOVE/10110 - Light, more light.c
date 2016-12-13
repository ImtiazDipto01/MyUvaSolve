#include<stdio.h>
#include<math.h>
int main()
{
     long int input,r,i,temp,t;
    while(scanf("%ld",&input)==1)
    {
      if(input==0)
      {
          break;
      }
      t=input;
      temp=(long)sqrt(t);
      r=temp*temp;
      if(r==input)
      {
          printf("yes\n");
      }
      else
      {
          printf("no\n");
      }
    }
    return 0;
}
