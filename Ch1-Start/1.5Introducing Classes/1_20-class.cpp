#include <iostream>
#include "../Sales_item.h"
int main() 
{
    Sales_item item1, item2;
    std::cin  >> item1 >> item2;
    std::cout << item1 + item2 << std::endl;
    return 0;
}

//输入 bookNo, units_sold, revenue
//0-201-78345-X 3 20.00
//0-201-78345-X 2 25.00
//输出 0-201-78345-X 5 110 22