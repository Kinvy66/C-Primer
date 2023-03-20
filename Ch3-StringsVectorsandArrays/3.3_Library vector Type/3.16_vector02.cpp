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
    
    std::cout << "v1: ";
    for (const auto& v : v1) 
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

    std::cout << "v4: ";
    for (const auto &v : v4)
    {
        std::cout << v << " ";
    }
    std::cout << std::endl;

    std::cout << "v5: ";
    for (const auto &v : v5)
    {
        std::cout << v << " ";
    }
    std::cout << std::endl;

    std::cout << "v6: ";
    for (const auto &v : v6)
    {
        std::cout << v << " ";
    }
    std::cout << std::endl;

    std::cout << "v7: ";
    for (const auto &v : v7)
    {
        std::cout << v << " ";
    }
    std::cout << std::endl;

    return 0;

}

class Debug {
public:
    constexpr Debug(bool b = true) : hw(b), io(b), other(b) {}
    constexpr Debug(bool h, bool i, bool o) :
                    hw(h), io(i), other(o) {}
    
    constexpr bool any() { return hw || io || other;}
    void set_io(bool b) {io = b;}
    void set_hw(bool b) {hw = b;}
    void set_other(bool b) {other = b;}
private:
    bool hw;
    bool io;
    bool other;

};