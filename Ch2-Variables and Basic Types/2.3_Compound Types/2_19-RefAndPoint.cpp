/**
 * 指针和引用的区别
 * 指针变量可以改变，引用不可以改变
 * 这里的改变是指向的地址的改变
 * 引用类似于常量指针
 * 
 */
#include <iostream>
int main()
{
    int val1;
    int val2 = 42;
    int *p = &val1;
    int &ref = val1;    //引用必须初始化
    ref = val2;         //引用的值不能改变，val1 = val2; 并没有改变ref的指向
    return 0;
}