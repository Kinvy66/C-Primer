/**
 * 
 * 这个程序的功能是计算 -100 + (-99) + ... + 99 + 100
 * 结果是0 
 * 
 */

#include <iostream>
int main()
{
    int sum = 0;
    for (int i = -100; i <= 100; ++i)
    {
        sum += i;
    }
    std::cout << "sum = " << sum << std::endl;

    return 0;
}

