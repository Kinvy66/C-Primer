#include <iostream>
#include <string>

using std::string;

int main()
{
    string line;
    getline(std::cin, line);
    std::cout << line << std::endl;


    string word;
    std::cin >> word;
    std::cout << word << std::endl;

    return 0;
}