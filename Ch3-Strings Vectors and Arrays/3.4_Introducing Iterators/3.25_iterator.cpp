#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<unsigned> scores(11, 0);

    unsigned grade;
    auto it = scores.begin();
    while (cin >> grade)
    {
        if (grade <= 100)
        {
            ++*(it+(grade/10));
        }
        
    }

    for (auto s : scores)
    {
        cout << s << " ";
    }

    return 0;
    
}

// 3.26 
/*
mid1 = beg + (end - beg) / 2;
mid2 = (beg + end) / 2;

迭代器没有定义 + 运算符

*/