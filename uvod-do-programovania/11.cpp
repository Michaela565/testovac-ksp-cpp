#include <iostream>

int main()
{
    int a, b, c;

    std::cin >> a;
    b = a;
    c = a;
    for (int i = 0; i < 4; i++)
    {
        std::cin >> a;
        if (a > b)
        {
            b = a;
        }

        c += a;
    }

    std::cout << c - b << std::endl;
    return 0;
}