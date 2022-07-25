#include <iostream>

using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    int* p = arr;

    for (int i = 0; i < 5; ++i) {
        p[i] = 0;
    }

    for (auto a : arr) {
        cout << a << " ";
    }


    return 0;
}