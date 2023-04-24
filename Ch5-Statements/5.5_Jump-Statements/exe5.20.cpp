/**
* @file: exe5.20.cpp
* @brief: 
* @author: Kinvy.Qiu
* @email: Kinvy66@163.com
* @date: 2023/4/19 
*/
#include <iostream>
#include <string>
#include <vector>

int main(int argc, char** argv) {

    int i = 0;
    std::string word, current, last;


    while (true) {
        std::cin >> word;
        current = word;
        if (current == last && !last.empty() && !current.empty()) {
            std::cout << current << std::endl;
            break;
        }
        last = current;
    }
    return 0;
}