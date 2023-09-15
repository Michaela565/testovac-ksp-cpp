#include <iostream>

int main()
{
    int n, x, input, najmensie;
    x = 0;
    std::cin >> n;
    int numbers[n];

    for (int i = 0; i < n; i++)
    {
        std::cin >> input;
        numbers[i] = input;
    }

    najmensie = numbers[0];

    for (int i = 0; i < n; i++)
    {
        if (najmensie > numbers[i])
        {
            najmensie = numbers[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (najmensie == numbers[i])
        {
            ++x;
        }
    }

    std::cout << x << std::endl;
    return 0;
}