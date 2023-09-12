#include <iostream>

int main()
{
    int a, b;

    std::cin >> a;
    b = a;
    for (int i = 0; i < 2; i++)
    {
        std::cin >> a;
        if (a < b)
        {
            b = a;
        }
    }

    std::cout << b << std::endl;
    return 0;
}