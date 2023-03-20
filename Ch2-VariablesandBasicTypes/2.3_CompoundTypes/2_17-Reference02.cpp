#include <iostream>
int main()
{
    int i, &ri = i;  // ri 是指向i的引用
    i = 5;          //修改i的值
    ri = 10;        //修改引用ri,实际是修改i的值
    std::cout << i << " " << ri << std::endl;

    return 0;
}

//输出结果  10 10
