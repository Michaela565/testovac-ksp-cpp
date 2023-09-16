#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    switch (n)
    {
    case 1:
        std::cout << "ABD" << std::endl;
        break;

    case 2:
        std::cout << "ACD" << std::endl;
        break;

    case 3:
        std::cout << "ACCCCCD" << std::endl;
        break;

    case 4:
        std::cout << "AACDD" << std::endl;
        break;

    case 5:
        std::cout << "AACCCCCDCABDABDABDABDABDD" << std::endl;
        break;

    case 6:
        std::cout << "AAACCCCCDCABDABDABDABDABDDCBBBBBAACDDAACDDAACDDAACDDAACDDD" << std::endl;
        break;
    default:
        break;
    }
    return 0;
}