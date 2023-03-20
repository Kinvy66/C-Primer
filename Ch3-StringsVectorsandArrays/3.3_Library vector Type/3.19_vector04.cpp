#include <iostream>
#include <vector>

using std::vector;

int main()
{
    vector<int> v1 (10, 42);
    vector<int> v2{
        42,
        42,
        42,
        42,
        42,
        42,
        42,
        42,
        42,
        42
    };
    vector<int> v3 (v1);

    std::cout << "v1: ";
    for (const auto &v : v1)
    {
        std::cout << v << " ";
    }
    std::cout << std::endl;

    std::cout << "v2: ";
    for (const auto &v : v2)
    {
        std::cout << v << " ";
    }
    std::cout << std::endl;

    std::cout << "v3: ";
    for (const auto &v : v3)
    {
        std::cout << v << " ";
    }
    std::cout << std::endl;
}