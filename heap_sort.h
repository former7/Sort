/*************************************************************************
	> File Name: heap_sort.h
	> Author: 
	> Mail: 
	> Created Time: 2017年07月27日 星期四 19时57分11秒
 ************************************************************************/

#ifndef _HEAP_SORT_H
#define _HEAP_SORT_H
#include<vector>
using namespace std;
class Solution
{
public:
    void heap_adjust(vector<int>& array,int root,int n)
    {
        int child=2*root+1;
        while(child<n)
        {
            if(child+1<n&&array[child+1]>array[child])
            {
                child++;
            }
            if(array[root]<array[child])
            {
                swap(array[root],array[child]);
                root=child;
                child=2*root+1;
            }
            else
                break;
        }
    }
    void build_heap(vector<int>& array)
    {
        int len=array.size();
        if(len<=0)return;
        for(int i=(len-1)/2;i>=0;i--)
            heap_adjust(array,i,len);
    }
    void sort(vector<int>& array)
    {
        build_heap(array);
        int len=array.size();
        if(len<=0)return;
        for(int i=len-1;i>=0;i--)
        {
            swap(array[0],array[i]);
            heap_adjust(array,0,i);
        }
    }
};
#endif
