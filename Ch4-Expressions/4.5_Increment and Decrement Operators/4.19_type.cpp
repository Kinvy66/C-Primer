#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int* ptr;
    vector<int> vec;
    int ival;

    ptr != 0 && *ptr++;   //  ptr 不是空指针，且ptr所指向地址的数值不是不是0

    ival++ && ival;      // ival 不为0，且 ival+1 不为0

    vec[ival++] <= vec[ival];   // vec[val] <+ vec[ival+1]
    
    return 0;
}