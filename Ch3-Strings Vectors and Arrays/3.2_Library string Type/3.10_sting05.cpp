#include <iostream>
#include <string>

using std::string;

int main()
{
    string s;
    string s1;
    std::cin >> s;
    for (auto i : s)
    {
        if(isalnum(i))
            s1 += i;
    }
    std::cout << s << std::endl;
    std::cout << s1 << std::endl;

//3.11
    const string s2 = "kkdff";
    for (auto &c : s2)   // const int& c
    {
        /*  */
    }

    return 0;
}