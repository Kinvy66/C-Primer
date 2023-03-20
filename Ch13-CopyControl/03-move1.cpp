/**
* @author: Kinvy
* @email: Kinvy66@163.com
* @date: 2023/3/20 12:22
* @file: 03-move1.cpp
* @description: 
*/

#include <iostream>

int main(int argc, char** argv) {
    int &&r1 = 42;
    int i = 42;
    int &&r3 = std::move(i);

    int &&r2 = std::move(r1);
    std::cout << r1 << std::endl;

    return 0;
}
