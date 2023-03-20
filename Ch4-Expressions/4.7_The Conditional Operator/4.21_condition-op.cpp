#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec{1, 3, 4, 6, 7};

    for (auto& v : vec) {
        v = v % 2 != 0 ? v*2 : v;
        cout << v << " ";
    }
    cout << endl;

    return 0;
}