#include <bits/stdc++.h>

using namespace std ;

int arr[101][101],clm_counter[101] ;

int main()
{
    int i,j,t_case,n,sum_cr,cnt_odd_r,cnt_odd_c,flag;
    while(cin >> n)
    {
        cnt_odd_r = cnt_odd_c = 0 ;
        flag = 0 ;
        memset(clm_counter , 0 , sizeof(clm_counter)) ;
        int row , coloum ;
        row = coloum = 0 ;
        if(n == 0)
        {
            break ;
        }
        for(i = 0 ; i < n ; i++)
        {
            sum_cr = 0 ;
            for(j = 0 ; j < n ; j++)
            {
                cin >> arr[i][j] ;
                sum_cr += arr[i][j] ;
                clm_counter[j] += arr[i][j] ;
            }
            if(sum_cr % 2 != 0)
            {
                cnt_odd_r ++ ;
                if(cnt_odd_r == 1)
                {
                    row = i ;
                }
            }
        }
        for(i = 0 ; i < n ; i++)
        {
            if(clm_counter[i] % 2 != 0)
            {
                cnt_odd_c ++ ;
                if(cnt_odd_c == 1)
                {
                    coloum = i ;
                }
            }
        }
        if(cnt_odd_r > 1 || cnt_odd_c > 1)
        {
            flag = 1 ;
            cout << "Corrupt" << endl ;
        }
        else if(cnt_odd_r == 0 && cnt_odd_c == 0)
        {
            flag = 1 ;
            cout << "OK" << endl ;
        }
        else if(flag == 0 && cnt_odd_r == 1 && cnt_odd_c == 1)
        {
            printf("Change bit (%d,%d)\n",row+1,coloum+1) ;
        }
    }
}
