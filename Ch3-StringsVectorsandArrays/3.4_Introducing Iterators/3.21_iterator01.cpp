#include <iostream>
#include <vector>
#include <string>

using std::string;
using std::vector;

int main()
{
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<string> v6{10};
    vector<string> v7{10, "hi"};

    for (auto it = v1.begin(); it != v1.end(); ++it) 




    std::cout << "v1: ";
    for (auto it = v1.begin(); it != v1.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout << "v2: ";
    for (auto it = v2.begin(); it != v2.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout << "v3: ";
    for (auto it = v3.begin(); it != v3.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout << "v4: ";
    for (auto it = v4.begin(); it != v4.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout << "v5: ";
    for (auto it = v5.begin(); it != v5.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout << "v6: ";
    for (auto it = v6.begin(); it != v6.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout << "v7: ";
    for (auto it = v7.begin(); it != v7.end(); ++it)
    {
        std::cout << *it << " ";
    }

    return 0;
}