#include <iostream>

using namespace std;

int main()
{
    // 4.25
    char c = 'q';
    cout << hex << (~'q' << 6) << endl; // ?

    return 0;
}