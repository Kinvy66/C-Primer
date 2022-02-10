#include <iostream>
int main()
{
    int num1;
    int num2;
    int temp;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;
    if(num1 > num2) {   //互换 n1,n2使得 n1 < n2
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    while (num1 <= num2)
    {
        std::cout << num1++ << std::endl;
    }

    return 0;
}