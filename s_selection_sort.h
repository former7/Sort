/*************************************************************************
	> File Name: s_selection_sort.h
	> Author: 
	> Mail: 
	> Created Time: 2017年07月27日 星期四 18时47分59秒
 ************************************************************************/

#ifndef _S_SELECTION_SORT_H
#define _S_SELECTION_SORT_H
#include<vector>
using namespace std;
class Solution
{
public:
    void sort(vector<int>& array)
    {
        int len =array.size();
        if(len<=0)return;
        int i,j;
        for(i=0;i<len;i++)
        {
            int midx=i;
            for(j=i+1;j<len;j++)
            {
                if(array[j]<=array[midx])
                {
                    midx=j;
                }  
            }
            swap(array[i],array[midx]);
        }
    }
};
#endif
