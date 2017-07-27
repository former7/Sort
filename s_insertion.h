/*************************************************************************
	> File Name: s_insertion.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年07月27日 星期四 16时33分04秒
 ************************************************************************/
#include"array_print.h"
#include<iostream>
#include<vector>
using namespace std;
class Solution
{
public:
    void sort(vector<int>& array)
    {
        int len=array.size();
        if(len<=0)return;
        for(int i=1;i<len;i++)
        {
            for(int j=i-1;j>=0&&array[j]>array[j+1];j--)
                swap(array[j],array[j+1]);
        }
    }
};
