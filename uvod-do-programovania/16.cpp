#include <iostream>

int main()
{
    int a, b;
    std::cin >> a;

    b = 1;

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < (a - i - 1); j++)
        {
            std::cout << ".";
        }
        for (int j = 0; j < (b); j++)
        {
            std::cout << "*";
        }
        for (int j = 0; j < (a - i - 1); j++)
        {
            std::cout << ".";
        }
        b += 2;
        std::cout << std::endl;
    }
    return 0;
}