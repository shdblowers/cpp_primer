#include <iostream>

int main()
{
    std::cout << "Keep entering numbers, pressing ENTER after each one (press CTRL+D to finish)" << std::endl;

    int sum = 0;

    for (int value = 0; std::cin; sum += value, value = 0)
    {
        std::cin >> value;
    }

    std::cout << "Sum is: " << sum << std::endl;

    return 0;
}