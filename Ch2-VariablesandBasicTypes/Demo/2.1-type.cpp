#include <iostream>
#include "i.h"
using namespace std;

// typedef numbere uu;

int init;
//extern int i = 1; //错误，给i赋值extern失效
struct A {
int m;
void print()
{
    cout << m << endl;
}
};

void test()
{
    int uninit;
    cout << uninit << endl;
}

void test01()
{
    A a;
    a.print();

}

int main()
{

    test();
    return 0;
}