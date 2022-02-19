#include <iostream>
int main()
{
    int* ip, i, &r = i;     //a. ip: int*; i:int; r:int&
    int i, *ip = 0;         //b. i:int; ip:int*
    int* ip, ip2;           //c. ip:int*; ip2:int
    return 0;    
}