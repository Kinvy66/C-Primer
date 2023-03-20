#include <iostream>
#include <string>

using std::string;

int main()
{
    string s = "wergthgyj";


    std::cout << s << std::endl;
    // 3.6
/*     for (auto& x : s) 
    {
        x = 'X';
    } */

    // 3.7
    for (char x : s)   // 使用char, 是值拷贝，不能改变原始的s
    {
        x = 'X';
    }

    /*     string s1;
    std::cout << s1[0] << std::endl;   // 没有报错，输出的是一个空格 */

    std::cout << s << std::endl;

    
    return 0;
}