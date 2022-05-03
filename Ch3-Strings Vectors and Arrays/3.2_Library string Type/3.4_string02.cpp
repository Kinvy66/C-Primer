#include <iostream>
#include <string>

using std::string;

int main()
{
    string s1, s2;
    std::cin >> s1 >> s2;
    if(s1 != s2) 
    {
       string l =  (s1.size() > s2.size())? s1 : s2;
       std::cout << l << std::endl;
    }
    else 
    {
        std::cout << "s1 = s2" << std::endl;
    }
    
    return 0;
}