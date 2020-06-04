#include <iostream>
#include "Sales_item.hh"

int main()
{
    Sales_item book1, book2;

    std::cout << "Enter two books: " << std::endl;

    std::cin >> book1 >> book2;

    std::cout << "Sum: " << book1 + book2 << std::endl;

    return 0;
}