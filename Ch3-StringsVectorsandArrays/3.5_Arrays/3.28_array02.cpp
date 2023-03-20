#include <iostream>

using namespace std;

string sa[10];   // 空字符
int ia[10];      // 10 个 0

int main()
{
    string sa2[10];     // 空字符， 调用string的默认构造
    int ia2[10];        // 10 个随机数

    for (auto s : sa) {
        cout << s;
    }
    cout << endl;
    for (auto i : ia) {
        cout << i ;
    }
    cout << endl;
    for (auto s : sa2)
    {
        cout << s;
    }
    cout << endl;

    for (auto i : ia2)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}