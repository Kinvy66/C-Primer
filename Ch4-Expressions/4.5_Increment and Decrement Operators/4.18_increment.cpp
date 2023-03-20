#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec{7, 2, 3, -1, 5};

    auto beg  = vec.begin();
    while (beg != vec.end() && *beg >= 0) {
        cout << *beg++ << endl;
        // cout << *++beg << endl;     // 前置 ++ , 第一个数不会打印输出
    }


    return 0;
}