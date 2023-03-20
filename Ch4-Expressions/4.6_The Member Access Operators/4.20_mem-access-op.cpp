#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string>::iterator iter;

    *iter++;            // 正确， 获取iter指向的元素，并递增iter
    (*iter)++;          // 错误， (*iter) 解引用取得一个string值，string 没有定义 ++ 运算
    *iter.empty();      // 错误，  *(iter.empty())  迭代器vector<string>::iterator 没有 empty() 方法
    iter->empty();      // 正确， (*iter).empty()
    ++*iter;            // 错误， ++(*iter), string 没有定义前置的++
    iter++->empty();    // 正确， 先执行(*iter).empty()操作，然后对iter递增

    return 0;
}