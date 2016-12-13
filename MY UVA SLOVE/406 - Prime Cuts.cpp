#include <bits/stdc++.h>

using namespace std ;

int arr[1005],prime_g[1005],prime_counter[1005] ;

void prime()
{
    arr[2] = 0 ;
    arr[1] = 0 ;
    int index = 0,i,j ;
    prime_g[index++] = 1 ;  // in this problem 1 is a prime number
    prime_g[index++] = 2 ;
    for(i = 4 ; i <= 1000 ; i += 2)
    {
        arr[i] = 1 ;
    }
    for(i = 3 ; i <= 1000 ; i+=2)
    {
        if(arr[i] == 0)
        {
            prime_g[index++] = i ;
            for(j = i*2 ; j <= 1000 ; j+=i)
            {
                arr[j] = 1 ;
            }
        }
    }
    int counter = 0 , tmp;
    for(i = 1 ; i <= 1000 ; i++)
    {
        if(arr[i] == 0)
        {
            counter ++ ;
            prime_counter[i] = counter ;
        }
        else
        {
            prime_counter[i] = counter ;
        }
    }
}

int main()
{
    int i,j,k,t_case,n,c ;
    prime() ;
    while(cin >> n >> c)
    {
        int tmp = c ;
        int tmp2 = 0 ;
        int counter = 0 , counter2 = 0 ;
        if(prime_counter[n] % 2 == 0)
        {
            c = c * 2 ;
        }
        else if(prime_counter[n] % 2 != 0)
        {
            c = ((c * 2) - 1) ;
        }
        if(prime_counter[n] < c)
        {
            printf("%d %d: ",n,tmp) ;
            for(i = 0 ; i < prime_counter[n] ; i++)
            {
                if(i+1 < prime_counter[n])
                {
                    printf("%d ",prime_g[i]) ;
                }
                else
                {
                    printf("%d",prime_g[i]) ;
                }
            }
            cout << endl ;
        }
        else if(prime_counter[n] >= c)
        {
            tmp2 = prime_counter[n] - c ;
            tmp2 = tmp2 / 2 ;
            printf("%d %d: ",n,tmp) ;
            for(i = tmp2 ; i < prime_counter[n] ; i++)
            {
                counter2 ++ ;
                if(counter2 < c)
                {
                    printf("%d ",prime_g[i]) ;
                }
                if(counter2 == c)
                {
                    printf("%d",prime_g[i]) ;
                    break ;
                }
            }
            cout << endl ;
        }
        cout << endl ;
    }
}
