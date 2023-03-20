#include <iostream>

using namespace std;

int txt_size();

int main()
{
    unsigned buf_size = 1024;

    int ia[buf_size]; 
    int ia1[4 * 7 - 11]; 
    // int ia2[txt_size];   // 错误数组的元素的必须是一个常量值
    //char str[11] = "fundamental";     // 定义的元素个数需等于大于赋予的初始值， 字符串常量后有一个空字符'\0'
    return 0;
}   