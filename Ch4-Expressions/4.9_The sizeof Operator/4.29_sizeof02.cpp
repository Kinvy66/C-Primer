#include <iostream>

using namespace std;

int main()
{
    int x[10];
    int* p = x;
    cout << sizeof(x) / sizeof(*x) << endl;
    cout << sizeof(int) << endl;
    cout << sizeof(p) / sizeof(*p) << endl;   // p是指针大小为8个字节， *p解引用得到的是int类型，int为4个字节
    return 0;
}