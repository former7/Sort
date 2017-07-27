/*************************************************************************
	> File Name: array_print.h
	> Author: 
	> Mail: 
	> Created Time: 2017年07月27日 星期四 16时47分14秒
 ************************************************************************/

#ifndef _ARRAY_PRINT_H
#define _ARRAY_PRINT_H
#include<vector>
#include<iostream>
#include<stdarg.h>
class array_test
{
public:

    array_test(int len,...)
    {
        if(len==0)
        {
            int a[9]={3,3,2,5,8,9,7,3,3};
            for(int i=0;i<9;i++)
                array.push_back(a[i]);
            return;
        }
        va_list ap;
        va_start(ap,len);
        int temp=va_arg(ap,int);
        for(int i=0;i<len;i++)
        {
            array.push_back(temp);
            temp=va_arg(ap,int);
        }
    }
    void array_print()
    {
        for(int i=0;i<(int)array.size();i++)
            std::cout<<array[i]<<" ";
        std::cout<<std::endl;
    }
    std::vector<int>& get_array()
    {
        return array;
    }
private:
    std::vector<int> array;
};
#endif
