/**
* @author: Kinvy
* @email: Kinvy66@163.com
* @date: 2022/12/11 12:59
* @file: 01-useMap.cpp
* @description: 
*/
#include <iostream>
#include <string>
#include <map>

using  namespace std;
int main()
{
    map<string, size_t> word_count;		// string 到 size_t的空map
    string word;
    while(cin >> word)
        ++word_count[word];		// 提取word的计数器并将其加1
    for (const auto &w : word_count)	// 对map中的每个元素 打印结果
        cout << w.first << " occurs " << w.second
             << ((w.second > 1) ? " times" : " time") << endl;



}

