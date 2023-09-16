#include <iostream>

int main()
{
    int n, x, input, addup;
    addup = 0;
    std::cin >> n;
    int numbers[n];

    for (int i = 0; i < n; i++)
    {
        std::cin >> input;
        numbers[i] = input;
    }

    std::cin >> x;

    for (int i = 0; i < n; i++)
    {

        if (numbers[i] < x)
        {
            addup += numbers[i];
        }
    }

    std::cout << addup << std::endl;
    return 0;
}