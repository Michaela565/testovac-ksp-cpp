#include <iostream>

int main()
{
    int input;
    std::cin >> input;

    if (input % 7 == 0)
    {
        std::cout << "ano" << std::endl;
    }
    else
    {
        std::cout << "nie" << std::endl;
    }

    return 0;
}