/**
* @file: scope01.cpp
* @brief: 
* @author: Kinvy.Qiu
* @email: Kinvy66@163.com
* @date: 2023/4/14 10:34
*/

#include <iostream>

int get_num() {
    return 42;
}

void pratice_54() {
    std::string s = "hello";
    auto  iter = s.begin();
    while ( iter != s.end()) {
        /*   std::string::iterator iter != s.end() 不能作为条件，它不能转换为bool      */
        iter++;
    }

}

int main(int argc, char** argv) {
    // while (int i = get_num()) {
    //     std::cout << i << std::endl;
    // }
    // i = 0;      // 错误， i的用域只在 while循环内

    {
        int ival = 42;
        std::cout << ival << std::endl;
    }

    // ival = 10;

    return 0;
}