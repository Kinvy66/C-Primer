#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec(10);

    for (size_t i = 0; i < 10; ++i)
    {
        vec[i] = i;
    }

    for (auto i : vec) 
    {
        cout << i << " ";
    }
    

    return 0;
}

// 3.33
/*
不初始化 scores数组，数组的元素的值会是随机值
*/