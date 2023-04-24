/**
* @file: practice_5-3-1.cpp
* @brief: 
* @author: Kinvy.Qiu
* @email: Kinvy66@163.com
* @date: 2023/4/14 10:54
*/

#include <iostream>
#include <vector>
#include <string>

void exe_55() {
    const std::vector<std::string> score = {"A", "B", "C"};

    int score_int;
    std::cin >> score_int;

    if (score_int >= 80 && score_int <= 100) {
        std::cout << "score: " << score[0] << std::endl;
    } else if (score_int >= 60 && score_int < 80) {
        std::cout << "score: " << score[1] << std::endl;
    } else if (score_int > 0 && score_int < 60) {
        std::cout << "score: " << score[2] << std::endl;
    } else {
        std::cout << "error" << std::endl;
    }
    // 条件运算符
    std::string s_score;

}



int main(int argc, char** argv) {

    exe_55();

    return 0;
}