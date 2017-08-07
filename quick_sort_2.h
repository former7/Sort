/*************************************************************************
	> File Name: quick_sort_2.h
	> Author: 
	> Mail: 
	> Created Time: 2017年08月07日 星期一 20时01分42秒
 ************************************************************************/

#ifndef _QUICK_SORT_2_H
#define _QUICK_SORT_2_H
#include<vector>
using namespace std;
class Solution
{
public:
    void sort(vector<int> & array)
    {
        int len=array.size();
        if(len<=0) return;
        quick_sort_2(array,0,len-1);
    }
    void quick_sort_2(vector<int>& array,int l,int r)
    {
        if(l<r)
        {
            int key=array[l],j=l;
            for(int i=l;i<=r;i++)
            {
                if(array[i]<key)
                {
                    j++;
                    swap(array[i],array[j]);
                }
            }
            swap(array[l],array[j]);
            quick_sort_2(array,l,j-1);
            quick_sort_2(array,j+1,r);
                
        }
    }
};
#endif
