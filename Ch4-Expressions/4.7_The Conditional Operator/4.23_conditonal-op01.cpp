#include <iostream>

using namespace std;

int main()
{
    string s = "word";
    // string p1 = s + s[s.size() - 1] =a= 's' ? "" : "s";
    // 修改
    string p1 = s + (s[s.size() - 1] == 's' ? "" : "s");

    // 4.25
    char  c = 'q';
    cout << hex << (~'q' << 6) << endl;  // ?

    return 0;
}