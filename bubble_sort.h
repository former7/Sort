/*************************************************************************
	> File Name: bubble_sort.h
	> Author: 
	> Mail: 
	> Created Time: 2017年07月27日 星期四 20时28分28秒
 ************************************************************************/

#ifndef _BUBBLE_SORT_H
#define _BUBBLE_SORT_H
#include<vector>
using namespace std;
class Solution
{
public:
    void sort(vector<int>& array)
    {
        int len=array.size();
        if(len<=0)return;
        for(int i=0;i<len;i++)
            for(int j=0;j<len-i-1;j++)
            {
                if(array[j]>array[j+1])
                    swap(array[j],array[j+1]);
            }
    }
};
#endif
