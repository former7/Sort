/*************************************************************************
	> File Name: test_main.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年07月27日 星期四 17时21分38秒
 ************************************************************************/

#include<iostream>
#include"array_print.h"
#include"merge_sort.h"
//#include"quick_sort.h"
//#include"bubble_sort.h"
//#include"heap_sort.h"
//#include"s_selection_sort.h"
//#include"shell_sort.h"
//#include"s_insertion.h"
using namespace std;
int main()
{
    Solution s;
    array_test a_t(0);
    a_t.array_print();
    s.sort(a_t.get_array());
    a_t.array_print();
}
