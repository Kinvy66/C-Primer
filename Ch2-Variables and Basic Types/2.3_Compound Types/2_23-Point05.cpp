#include <iostream>
int main()
{
    int i = 42;

    void *p = &i;   //void* 指针可以指向任何类型
    long *lp = &i;  //类型不匹配

    return 0;    
}