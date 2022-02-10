#include <iostream>
#include "../Sales_item.h"
int main() 
{
    Sales_item book;
    std::cin  >> book;
    std::cout << book << std::endl;
    return 0;
}

//测试
//输入 0-201-7035300-X 4 24.99
//输出 0-201-7035300-X 4 99.96 24.99