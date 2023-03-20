#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using std::string;
using std::vector;

int main()
{
    string s;
    vector<string> vstr;

    while(std::cin >> s)
    {
        vstr.push_back(s);
    }

    for (auto &v : vstr)
    {
        for (auto& i: v)
        {
            i =  toupper(i);
        }
        std::cout << v << " ";
    }

    return 0;

}