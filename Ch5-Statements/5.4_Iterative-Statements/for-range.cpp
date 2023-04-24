/**
* @file: for-range.cpp
* @brief: 
* @author: Kinvy.Qiu
* @email: Kinvy66@163.com
* @date: 2023/4/19 
*/
#include <iostream>
#include <vector>

int main(int argc, char** argv) {

    std::vector<int> ivec{1, 2, 3, 4, 5, 6};

    for (auto i : ivec) {
        std::cout << i << std::endl;
    }


    return 0;
}