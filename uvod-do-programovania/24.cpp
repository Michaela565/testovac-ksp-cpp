#include <iostream>

int main()
{
    int n, input;
    std::cin >> n;
    int numbers[n];
    int addupNums[n];

    for (int i = 0; i < n; i++)
    {
        std::cin >> input;
        numbers[i] = input;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            addupNums[j] = numbers[j] + numbers[j + 1];
            std::cout << addupNums[j];
            j == n - i - 2 ? std::cout << std::endl : std::cout << " ";
        }

        for (int j = 0; j < n; j++)
        {
            numbers[j] = addupNums[j];
        }
    }

    return 0;
}