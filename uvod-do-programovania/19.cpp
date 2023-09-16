#include <iostream>

int main()
{
    int n, x;
    std::cin >> n >> x;
    int added[n];
    for (int i = 0; i < n; i++)
    {
        int input;
        std::cin >> input;
        added[i] = input + x;
    }
    for (int i = 0; i < n; i++)
    {
        std::cout << added[i];
        i == n - 1 ? std::cout << std::endl : std::cout << " ";
    }

    return 0;
}