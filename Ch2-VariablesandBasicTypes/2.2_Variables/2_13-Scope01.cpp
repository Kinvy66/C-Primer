#include <iostream>
int i = 42;
int main()
{
    // 同名的局部变量会覆盖全局的
    int i = 100;
    int j = i;

    std::cout << "i = " << i << std::endl;
    std::cout << "j = " << j << std::endl;


    return 0;
}