#include <iostream>

int main()
{
    bool beginsTrue = true;

    while (beginsTrue)
    {
        std::cout << "Only run while if condition true." << std::endl;

        beginsTrue = false;
    }

    return 0;
}