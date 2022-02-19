#include <iostream>
int main()
{
    int i = 42;
    int *p1 = &i;       // 将指针p指向 i
    *p1 = *p1 * *p1;    // i = i * i;
    
    std::cout << "*p1 = " << *p1 << std::endl;
    return 0;
}