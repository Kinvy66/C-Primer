#include <iostream>
int main()
{
    int i = 0;
    double* dp = &i;    //a. &i是int*  dp是dobule类型指针
    int *ip = i;        //b. i 是int  
    int *p = &i;        //c. 正确

    return 0;
    
}