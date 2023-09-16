#include <iostream>

int main()
{
    int a, input;
    std::cin >> a;
    int rectangle[a][a];
    int flippedrec[a][a];

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            std::cin >> input;
            rectangle[i][j] = input;
        }
    }

    for (int i = a - 1; i >= 0; i--)
    {
        for (int j = 0; j < a; j++)
        {
            flippedrec[i][j] = rectangle[j][i];
            std::cout << flippedrec[i][j];
            j == a - 1 ? std::cout << std::endl : std::cout << " ";
        }
    }

    return 0;
}