/**
* @author: Kinvy
* @email: Kinvy66@163.com
* @date: 2022/12/26 20:44
* @file: for-test.cpp
* @description: 
*/
#include <iostream>
int main()
{
    int sum = 0;

    for (int val = 1; val <= 10; ++val) {
        sum += val;
    }

    std::cout << "Sum of 1 to 10 inclusive is "
              << sum << std::endl;

    return 0;

}
