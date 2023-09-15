#include <iostream>

int main()
{
    int n, x, input;
    std::cin >> n >> x;
    int numbers[n];

    for (int i = 0; i < n; i++)
    {
        std::cin >> input;
        numbers[i] = input;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (x == (numbers[i] - numbers[j]) || x == (numbers[j] - numbers[i]))
            {
                std::cout << "Ano" << std::endl;
                return 0;
            }
        }
    }

    std::cout << "Nie" << std::endl;

    return 0;
}