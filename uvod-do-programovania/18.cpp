#include <iostream>

int main()
{
    int n, a, b, c;
    a = 0;
    b = 1;
    std::cin >> n;
    if (n == 1)
    {
        std::cout << a;
    }
    else
    {
        std::cout << a << " " << b << " ";
        for (int i = 0; i < n - 2; i++)
        {
            c = a + b;
            a = b;
            b = c;
            std::cout << c;
            i == n - 3 ? std::cout << std::endl : std::cout << " ";
        }
    }
    return 0;
}