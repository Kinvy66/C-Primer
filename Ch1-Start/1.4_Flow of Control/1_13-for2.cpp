//使用 for 循环完成 1.9~11
#include <iostream>
int main()
{
    //1.9
    // int sum = 0;
    // for (int val = 50; val <= 100; ++val) 
    // {
    //     sum += val;
    // }
    // std::cout << "sum 50~100: " << sum << std::endl;

    //1.10
    // for (int i = 10; i >= 0; --i) 
    // {
    //     std::cout << i << "\t";
    // }

    //1.11
    int num1;
    int num2;
    std::cout << "Enter two numbers(num1 < num2): ";
    std::cin >> num1 >> num2;
    int val = num1;
    for ( ; val <= num2; ++val)
    {
        std::cout << val << "\t";
    }
    return 0;
}

