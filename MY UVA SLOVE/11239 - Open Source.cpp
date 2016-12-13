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

using namespace std;

map<string , int> project_counter ;
map<string , string> student_project ;
map<string , int> student_checking ;
vector<string> project_index ;

int main()
{
    int i,j,k,t_case,tmp,index = 0,chk, max = 0,tmp2;
    string str,project,tmp_str ;
    project_counter.clear() ;
    project_index.clear() ;
    student_checking.clear() ;
    student_project.clear() ;
    while(getline(cin , str))
    {
        if(str[0] == '0')
            break ;

        if(str[0] == '1')
        {
            sort(project_index.begin(),project_index.end()) ;
            int flag = 0 ;
            for(i = 0 ; i < project_index.size() ; i++)
            {
               for(j = 0 ; j < project_index.size() ; j++)
               {
                   tmp_str = project_index[j] ;
                   if(max == -1)
                   {
                       flag = 1 ;
                       break ;
                   }
                   if(max == project_counter[tmp_str])
                   {
                       cout << project_index[j] << " " << project_counter[tmp_str] << endl ;
                   }
               }
               if(flag == 1)
               {
                   break ;
               }
               max -- ;
            }
            index = 0 ;
            max = 0 ;
            project_counter.clear() ;
            project_index.clear() ;
            student_checking.clear() ;
            student_project.clear() ;
        }
        tmp = str[0] ;
        if(tmp >= 65 && tmp <= 90)
        {
            project_index.push_back(str) ;
            project = str ;
        }
        if(tmp >= 97 && tmp <= 122)
        {
           tmp_str = student_project[str] ;
           if(tmp_str[0] == '\0')
           {
               project_counter[project]++ ;
               if(max < project_counter[project])
               {
                   max = project_counter[project] ;
               }
               student_project[str] = project ;
           }
           else if(tmp_str[0] != '\0')
           {
               chk = student_checking[str] ;
               if(chk == 0 && project != tmp_str)
               {
                   project_counter[tmp_str]-- ;
                   student_checking[str] = 1 ;
               }
           }
        }
    }
    return 0;
}

