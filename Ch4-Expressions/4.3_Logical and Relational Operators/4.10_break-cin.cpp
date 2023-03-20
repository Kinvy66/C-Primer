#include <iostream>

using namespace std;

int main()
{
    int number;

    // while (cin >> number) {
    //     if (number == 42)
    //         break;
    // }

    // 4.11
    int a = 10, b = 5, c = 3, d = 1;

    if (a > b && b > c && c >d) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    // 4.12
    int i = 1, j = 2, k = 3;
    bool bl = (i!=j<k);  // 该表达式的顺序：< 得到是一个布尔值， != ，i 不是布尔值
    cout << bl << endl;

    return 0;
}