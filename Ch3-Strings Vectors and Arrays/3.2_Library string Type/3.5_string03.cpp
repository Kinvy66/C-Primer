#include <iostream>
#include <string>

using std::string;

int main()
{
    string input;
    string concat;
    while(std::cin >> input)
    {
        concat += input;  // 直接拼接多个字符串
        concat += input + " "; // 使用空格分隔开
    }
    std::cout << concat << std::endl;

    return 0;
}