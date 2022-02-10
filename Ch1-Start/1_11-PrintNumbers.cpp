#include <iostream>
int main()
{
    int num1;
    int num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;
    int val = num1;
    while (num2 >= val)
    {
        std::cout << num1++ << std::endl;
        num2--;
    }

    return 0;
}