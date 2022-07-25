#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    const char ca1[] = "hello ";
    const char ca2[] = "world!";
    char concat1[25];
    char concat2[25];

    cout << "strcpy:" << endl;
    strcpy(concat1, ca1);
    cout << concat1 << endl;
    strcpy(concat1, ca2);
    cout << concat1 << endl;

    cout << "strcat:" << endl;
    strcat(concat2, ca1);
    cout << concat2 << endl;
    strcat(concat2, ca2);
    cout << concat2 << endl;

    return 0;
}