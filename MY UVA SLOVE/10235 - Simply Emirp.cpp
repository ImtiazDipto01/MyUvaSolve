#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <string.h>
#include <string>
#include <math.h>
#include <stdlib.h>
#include <cctype>
#include <stack>
#include <queue>
#include <map>
#include <vector>
#include <sstream>
#include <utility>
#define SIZE 1000002

using namespace std;

long int prime_arr[SIZE] ;

void prime()
{
    long int i,j,k ;
    prime_arr[2] = 2 ;
    for(i = 3 ; i <= SIZE ; i+=2)
    {
        if(prime_arr[i] == 0)
        {
            prime_arr[i] = 2 ;
            for(j = i * 3 ; j <= SIZE ; j += i * 2)
            {
                prime_arr[j] = 1 ;
            }
        }
    }
}

int main()
{
    long int i,j,k,t_case,n ;
    prime() ;
    while(cin >> n)
    {
        long int rev = 0 , rem = 0 ;
        long int tmp = n ;
        while(tmp != 0)
        {
            rev = rev * 10 ;
            rev = (rev + (tmp % 10)) ;
            tmp = tmp / 10 ;
        }
        if(prime_arr[n] == 2 && prime_arr[rev] == 2 && n != rev)
        {
            printf("%ld is emirp.\n",n) ;
        }
        else if((prime_arr[n] == 2 && prime_arr[rev] != 2) || (prime_arr[n] == 2 && prime_arr[rev] == 2 && n == rev))
        {
            printf("%ld is prime.\n",n) ;
        }
        else if(prime_arr[n] != 2)
        {
            printf("%ld is not prime.\n",n) ;
        }
    }
    return 0;
}

