#include <iostream>

int main()
{
    int i = 0, &r = i;
    auto a = r;     // int a
    const int ci = i, &cr = ci; 
    auto b = ci;    // int b
    auto c = cr;    // int c
    auto d = &i;    // int* d
    auto e = &ci;   // const int* e
    const auto f = ci; // const int f
    auto &g = ci;   // const int& g
    // auto &h = 42; // 错误
    const auto &j = 42;  // const int& j

    return 0;
}