#include <iostream>
int main()
{
    int val1 = 10;
    int val2 = 42;
    int *p = &val1;     // p指针指向val
    std::cout << "p: " << p 
            << " *p : " << *p << std::endl;
    p = &val2;   //改变p的地址（指向）
    std::cout << "p: " << p 
        << " *p : " << *p << std::endl;

    *p = 17;   //改变p的指向的变量的值
    std::cout << "p: " << p 
        << " *p : " << *p << std::endl;
    return 0;
}