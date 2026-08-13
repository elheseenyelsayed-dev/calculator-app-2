#include <iostream>

int multiply(int a, int b)
{
    return a * b;
}

int main()
{
    std::cout << "Calculator App 2" << std::endl;
    std::cout << "4 * 5 = " << multiply(4, 5) << std::endl;

    return 0;
}