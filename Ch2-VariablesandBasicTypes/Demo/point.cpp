/**
* @author: Kinvy
* @email: Kinvy66@163.com
* @date: 2022/12/27 19:14
* @file: point.cpp
* @description: 
*/

#include <iostream>

using namespace std;

int main()
{
    int *p = nullptr;
    int val = 42;
    p = &val;

    cout << hex << p << endl;

    return 0;
}