/*************************************************************************
	> File Name: quick_sort.h
	> Author: 
	> Mail: 
	> Created Time: 2017年07月27日 星期四 20时41分43秒
 ************************************************************************/

#ifndef _QUICK_SORT_H
#define _QUICK_SORT_H
#include<vector>
using namespace std;
class Solution
{
public:
    void sort(vector<int>& array)
    {
        int len=array.size();
        if(len<=0)return;
        sort_core(array,0,len-1);
    }
    void sort_core(vector<int>& array,int l,int r)
    {
        if(l<r)
        {
            int key=array[l];
            int i=l,j=r;
            while(i<j)
            {
                while(i<j&&array[j]>key)
                    j--;
                if(i<j)
                    array[i++]=array[j];
                while(i<j&&array[i]<=key)
                    i++;
                if(i<j)
                    array[j--]=array[i];
            }
            array[i]=key;
            sort_core(array,l,i-1);
            sort_core(array,i+1,r);

        }
    }
};
#endif
