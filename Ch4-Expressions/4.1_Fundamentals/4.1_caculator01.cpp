#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //4.1 计算顺序 * / +
    cout << 5 + 10*20/2 << endl;

    // 4.2
    vector<int> vec {1, 3, 4};

    cout << "*vec.begin():" << *vec.begin() << endl;
    cout << "*(vec.begin()):" << *(vec.begin()) << endl;

    cout << "*vec.begin() + 1:" << *vec.begin() + 1<< endl;
    cout << "*(vec.begin()) + 1:" << *(vec.begin()) + 1  << endl;


    return 0;
}