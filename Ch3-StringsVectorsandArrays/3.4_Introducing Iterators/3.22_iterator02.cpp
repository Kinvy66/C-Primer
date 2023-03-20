#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

int main()
{
    vector<string> text = {"hello", "world", "!", "", "I", "and"};

    for (auto it = text.cbegin(); 
    it != text.cend() && !it->empty(); ++it) {
        for (auto c : *it) {
            cout << (char)toupper(c); // toupper 返回的是int 型， 需要转换为char
        }
        cout << " ";
    }

    string s("some string");
    if (s.begin() != s.end()) {
        auto it = s.begin();
        *it = toupper(*it);
    }
    cout << s << endl;

    return 0;

}