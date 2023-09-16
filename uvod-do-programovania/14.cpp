#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;

    for (int i = 0; i < a; i++)
    {
        for (int i = 0; i < b; i++)
        {
            std::cout << "*";
        }

        std::cout << std::endl;
    }
    return 0;
}