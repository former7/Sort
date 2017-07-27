/*************************************************************************
	> File Name: shell_sort.h
	> Author: 
	> Mail: 
	> Created Time: 2017年07月27日 星期四 18时32分23秒
 ************************************************************************/

#ifndef _SHELL_SORT_H
#define _SHELL_SORT_H
#include<vector>
using namespace std;
class Solution
{
public:
    void sort(vector<int>& array)
    {
        int i,j,gap;
        int len=array.size();
        if(len<=0)return;
        for(gap=len/2;gap>0;gap/=2)
        {
            for(i=gap;i<len;i++)
                for(j=i-gap;j>=0&&array[j]>array[j+gap];j-=gap)
            swap(array[j],array[j+gap]);
        }
    }
};
#endif
