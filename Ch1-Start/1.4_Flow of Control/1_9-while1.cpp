#include <iostream>
int main()
{
    int sum = 0;
    int beg = 50;

    while (beg <= 100)
    {
        sum += beg; 
        beg++;
    }

    std::cout << "sum 50~100: " << sum << std::endl;
    
    return 0;
}