#include <iostream>

using namespace std;

int main()
{
    auto exp1 = 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2;
    cout << exp1 << endl;  // 结果91

    // 实际的运算顺序
    auto exp2 = ((12 / 3) * 4) + (5 * 15) + ((24 % 4) / 2);
    cout << exp2 << endl;

    //4.5
    auto e1 = -30 * 3 + 21 / 5;
    auto e2 = -30 + 3 * 21 / 5;
    auto e3 = 30 / 3 * 21 % 5;
    auto e4 = -30 / 3 * 21 % 5;

    cout << "e1 = " << e1 << " "
    << "e2 = " << e2 << " "
    << "e3 = " << e3 << " "
    << "e4 = " << e4 <<endl;

    return 0;
}