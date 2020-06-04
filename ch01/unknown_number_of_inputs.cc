#include <iostream>

int main()
{
    std::cout << "Keep entering numbers, pressing ENTER after each one (press CTRL+D to finish)" << std::endl;

    int sum = 0, value = 0;

    // returns true until reach end-of-file / error
    while (std::cin >> value)
        sum += value;

    std::cout << "Sum is: " << sum << std::endl;

    return 0;
}