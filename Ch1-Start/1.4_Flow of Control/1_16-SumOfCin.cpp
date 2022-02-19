#include <iostream>
int main() 
{
    int sum = 0;
    int num = 0;
    //windows下EOF终止符是 ctrl + z, 回车
    for( ; std::cin >> num; ) {
        sum += num;
    }
    std::cout << " sum = " << sum << std::endl;

    return 0;
}