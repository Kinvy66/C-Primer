#include <iostream>
#include "../Sales_item.h"
int main() 
{
    Sales_item book;
    // 读入 ISBN 号、售出的册数以及销售价格
    std::cin  >> book;
    // 写入 ISBN、售出的册数、总销售额和平均价格
    std::cout << book << std::endl;
    return 0;
}

//测试
//输入 0-201-7035300-X 4 24.99
//输出 0-201-7035300-X 4 99.96 24.99