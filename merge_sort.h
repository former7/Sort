/*************************************************************************
	> File Name: merge_sort.h
	> Author: 
	> Mail: 
	> Created Time: 2017年07月27日 星期四 21时16分14秒
 ************************************************************************/

#ifndef _MERGE_SORT_H
#define _MERGE_SORT_H
#include<vector>
using namespace std;
class Solution
{
public:
    void sort(vector<int>& array)
    {
        int len=array.size();
        if(len<=0)return;
        merge_sort(array,0,len-1);
    }
    void merge_array(vector<int>& array,int first,int mid,int last)
    {
        vector<int> temp(array); 
        int i=first,j=mid+1;
        int m=mid,n=last;
        int k=0;
        while(i<=m&&j<=n)
        {
            if(array[i]<array[j])
                temp[k++]=array[i++];
            else
                temp[k++]=array[j++];
        }
        while(i<=m)
            temp[k++]=array[i++];
        while(j<=n)
            temp[k++]=array[j++];
        for(int i=0;i<k;i++)
            array[first+i]=temp[i];
    }
    void merge_sort(vector<int> &array,int first,int last)
    {
        if(first<last)
        {
            int mid=(first+last)/2;
            merge_sort(array,first,mid);
            merge_sort(array,mid+1,last);
            merge_array(array,first,mid,last);
        }
    }
};
#endif
