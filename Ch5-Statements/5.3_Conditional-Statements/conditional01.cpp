/**
* @file: conditional01.cpp
* @brief: 
* @author: Kinvy.Qiu
* @email: Kinvy66@163.com
* @date: 2023/4/14 10:44
*/

#include <iostream>


void if_else() {
    int val = 42;
    if (val > 0) {
        // ..
    } else {
        // ...
    }
}

void switch_statement() {
    char ch;
    while (std::cin >> ch) {
        switch (ch) {
            case 'a':
                //..
                break;
            case 'b':
                //..
                break;
            //.....
            default:
                //...
                break;
        }
    }
}

int main(int argc, char** argv) {

    return 0;
}