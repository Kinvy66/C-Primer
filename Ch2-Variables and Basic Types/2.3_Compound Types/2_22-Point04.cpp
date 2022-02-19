#include <iostream>
int main()
{
   int *p;

   if (p) {
       std::cout << "p is nullptr" << std::endl;
   }

   if (*p) {
       std::cout << "p val is 0 " << std::endl;
   }

   return 0;
    
}