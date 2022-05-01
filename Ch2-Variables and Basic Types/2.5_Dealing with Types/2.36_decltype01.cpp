#include <iostream>

int main()
{
    int a = 3, b =4;
    decltype(a) c = a;      // int c = a;
    decltype((b)) d = a;    // int& d = a;
    // a = 3, b =4, c = a = 3, d->a = 3

    ++c;
    ++d;
    // a = 4, b =4, c = 4, d->a = 4

    std::cout<< "a: " << a << ", b: " << b << std::endl;
    std::cout<< "c: " << c << ", d: " << d << std::endl;

    return 0;
}