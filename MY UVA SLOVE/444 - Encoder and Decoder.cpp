#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int i,j,k,t_case,len ;
    string s,s1 ;
    while(getline(cin, s))
    {
        reverse(s.begin(),s.end()) ;
        len = s.size() ;
        int index = 0 ;
        for(i = 0 ; i < len ; i++)
        {
            if(s[i] >= '0' && s[i] <= '9')
            {
                s1[index++] = s[i] ;
                s1[index++] = '\0' ;
                int tmp = atoi(s1.c_str()) ;

                if(tmp >= 65 && tmp <= 90 || tmp >= 97 && tmp <= 122 || tmp == 32 || tmp == 33 || tmp == 44 || tmp == 46 || tmp == 58 || tmp == 59 || tmp == 63)
                {
                    printf("%c",tmp) ;
                    index = 0 ;
                    tmp = 0 ;
                }
                else
                {
                    index -- ;
                }
            }
            if(s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z' || s[i] == ' ' || s[i] == '!' || s[i] == ',' || s[i] == '.' || s[i] == ':' || s[i] == ';' || s[i] == '?')
            {
                int tmp = s[i] ;
                int n = tmp ;
                while(n != 0)
                {
                    int rem = n % 10 ;
                    cout << rem ;
                    n = n / 10 ;
                }
            }

        }
        cout << endl ;
    }
}
