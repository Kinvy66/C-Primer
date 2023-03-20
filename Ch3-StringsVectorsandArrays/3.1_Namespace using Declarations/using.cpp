#include <iostream>

using std::cin;

int main()
{
    int i;
    cin >> i;        // 正确： cin 和 std::cin 含义相同
    //cout << i;      // 错误： 没有对应的using 声明， 必须使用完整的名字
    std::cout << i;     // 正确： 显示地从std中使用cout
    return 0;
}