#include <iostream>

int main()
{
    int aritmetickyPriemer = 0;
    for (int i = 0; i < 5; i++)
    {
        int input;
        std::cin >> input;
        aritmetickyPriemer += input;
    }

    std::cout << aritmetickyPriemer / 5 << std::endl;

    return 0;
}