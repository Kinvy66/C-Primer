#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;

int main()
{
    int num;
    vector<int> vec;
    while (std::cin >> num) 
    {
        vec.push_back(num);
    }
    for (const auto i : vec)
    {
        std::cout << i << " ";
    }

    return 0;
}

// 3.15 将类型改为string即可
