#include <iostream>

int main()
{
    int a, b, input;
    std::cin >> a >> b;
    int rectangle[a][b];
    int flippedrec[b][a];

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            std::cin >> input;
            rectangle[i][j] = input;
        }
    }

    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < a; j++)
        {
            flippedrec[i][j] = rectangle[j][i];
        }
    }

    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < a; j++)
        {

            std::cout << flippedrec[i][j];
            j == a - 1 ? std::cout << std::endl : std::cout << " ";
        }
    }
    return 0;
}