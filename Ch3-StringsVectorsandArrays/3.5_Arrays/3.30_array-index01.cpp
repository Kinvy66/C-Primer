#include <iostream>

using namespace std;

int main()
{
    constexpr size_t array_size = 10;
    int ia[array_size];
    for (size_t ix = 0; ix <= array_size; ++ix)  //  错误， 判断条件等于，可取到的最大的索引会是10，而数组的的最大的索引只有9
    {
        ia[ix] = ix;
    }
     
    return 0;
}