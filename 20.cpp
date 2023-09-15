#include <iostream>
#include <string>

int main()
{
    int n, x, input;
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
        std::cout << numbers[i] + x;
        i == n - 1 ? std::cout << std::endl : std::cout << " ";
    }

    return 0;
}