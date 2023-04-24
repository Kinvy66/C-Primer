/**
* @file: practice_5-3-2.cpp
* @brief: 
* @author: Kinvy.Qiu
* @email: Kinvy66@163.com
* @date: 2023/4/14 11:09
*/

#include <iostream>
#include <string>

void exe_1() {
    std::string str;
    int a_count = 0;
    int e_count = 0;
    int i_count = 0;
    int o_count = 0;
    int u_count = 0;

    std::cin >> str;

    for (const auto s : str) {
        if (s == 'a') {
            a_count++;
        }
        if (s == 'e') {
            e_count++;
        }
        if (s == 'i') {
            i_count++;
        }
        if (s == 'o') {
            o_count++;
        }
        if (s == 'u') {
            u_count++;
        }
    }

    std::cout << "a: " << a_count
            << "\ne: " << e_count
            <<"\ni: " << i_count
            << "\no: " << o_count
            << "\nu: " << u_count;


};

static void pre_main() {
    std::cout << "pre main" << std::endl;
}

class pp {
public:
    pp() {
        std::cout << "pre main" << std::endl;
    }
    static void pre_main() {
        std::cout << "pre main" << std::endl;
    }
};

pp p;

int main(int argc, char** argv) {
    std::cout << "main" << std::endl;
    return 0;
}

