#include <iostream>

int main()
{
    int n, max, input;
    max = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> input;
        if (max < input)
        {
            max = input;
        }
    }

    std::cout << max << std::endl;

    return 0;
}