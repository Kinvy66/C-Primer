#include <iostream>
#include <vector>

using std::vector;

int main()
{
    int num;
    vector<int> vec;
    while(std::cin >> num)
    {
        vec.push_back(num);
    }

    std::cout << "vec : ";
    for (const auto& v : vec)
    {
        std::cout << v << " ";
    }
    std::cout << std::endl;

    // 1 
    for (int i =0; i < vec.size()-1; i++)
    {
        std::cout << vec[i] + vec[i+1] << " ";
    }
    std::cout << std::endl;

    // 2
    for (int i = 0; i < vec.size() / 2; i++)
    {
        std::cout << vec[i] + vec[vec.size() - 1 - i] << " ";
    }

    return 0;
}