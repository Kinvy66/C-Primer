#include <iostream>
int main()
{
    int i = 100, sum = 0;  // 1
    for (int i = 0; i != 0; ++i) { //2 这里定义的i只用于for循环, 循环不会执行
        sum += i;
    } 

    //输出的是 1 处的 i
    std::cout << i << " " << sum << std::endl;

    return 0;
}