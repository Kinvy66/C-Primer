#include <iostream>

using namespace std;

int main()
{
    //4.13
    int i; 
    double d;
    d = i = 3.5;    // i = 3, d = 3
    i = d = 3.5;   // i = 3, d = 3.5

    // 4.14
    // if (42 = i) {}  // 错误， 右值不可以绑定到左值
    if (i = 42) {}   // 语法没有错误，逻辑错误，条件永远为true

    // 4.15
    double dval;
    int ival;
    int *pi;
    // dval = ival = pi = 0;  // 错误，指针不能赋值给普通变量   
    // 正确的写法
    dval = ival = *pi = 0; 

    // 4.16
    // if (p = getPtr() != 0)  // 修改 if ((p = getPtr()) != 0)
    // if (i = 1024)            // 修改 if (i == 1024)

    return 0;
}