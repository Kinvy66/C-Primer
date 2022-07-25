#include <iostream>

using namespace std;

int main()
{
    int a[5] = {1, 2, 3, 4, 5};

    int *p1 = a;
    int *p2 = &a[2];

    p1 += p2 - p1;

    cout << hex << p1 << " " << p2 << endl;
    cout << *p1 << " " << *p2 << endl;

    return 0;
}

// 功能
/*
使 p1和p2指向相同的位置（p2的地址）
 */