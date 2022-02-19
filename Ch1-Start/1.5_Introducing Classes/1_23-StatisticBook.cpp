#include <iostream>
#include <string>
#include "../Sales_item.h"
int main() 
{
    Sales_item currBook;
    Sales_item book;


    if (  std::cin >> currBook ) {
        int cnt = 1;
        while (std::cin >> book)
        {
            if(book.isbn() == currBook.isbn()) {
               ++cnt; 
            } else {
                std::cout << currBook.isbn() << " : " << cnt << std::endl;
                currBook = book;
                cnt = 1;
            }
        }
        std::cout << currBook.isbn() << " : " << cnt << std::endl;
                currBook = book;
    }
    return 0;
}

//输入
// 0-201-78345-X 3 20.00
// 0-201-78345-X 3 20.00
// 0-201-78321-X 3 20.00   
//输出
// 0-201-78345-X : 2
// 0-201-78321-X : 1