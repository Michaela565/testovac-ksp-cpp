#include <iostream>

int main()
{
    int a;

    std::cin >> a;

    if (a < 0)
    {
        std::cout << "zaporne" << std::endl;
    }
    else if (a > 0)
    {
        std::cout << "kladne" << std::endl;
    }
    else
    {
        std::cout << "nulove" << std::endl;
    }

    return 0;
}