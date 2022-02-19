#include <iostream>
int main()
{
    const int buf;      //a. 顶层const 需要初始化
    int cnt = 0;        //b. 正确
    const int sz = cnt; //c. 正确，
    ++cnt; ++sz;        //d. sz是顶层const不能改变

    return 0;
}