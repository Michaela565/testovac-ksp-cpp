#include <iostream>

int main()
{
    int a, b;

    std::cin >> a >> b;

    if (a == b)
    {
        std::cout << "Hura, rovnaju sa." << std::endl;
    }
    else
    {
        std::cout << "Nerovnaju sa." << std::endl;
    }

    return 0;
}