#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string s1 = "hello!";
    string s2 = "hello";

    const char ca1[] = "hello";
    const char ca2[] = "hello";

    // 比较两个string ,直接使用比较运算符
    if (s1 == s2) {
        cout << "s1 == s2" << endl;
    } else {
        cout << "s1 != s2" << endl;
    }

    // 使用库函数比较两个c风格的字符串
    if (strcmp(ca1, ca2) == 0) {
        cout << "ca1 == ca2" << endl;
    } else {
        cout << "ca1 != ca2" << endl;
    }
    

    return 0;
}