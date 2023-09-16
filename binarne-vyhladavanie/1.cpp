#include <iostream>
#include <list>
#include <map>
using namespace std;
int main()
{
    int n, input, x;
    cin >> n;
    map<int, int> numbers;

    bool found = false;

    for (int i = 0; i < n; i++)
    {
        cin >> input;
        numbers[input] = i;
    }

    cin >> x;
    int questions[x];
    int answers[x];

    for (int i = 0; i < x; i++)
    {
        cin >> input;
        questions[i] = input;
    }

    for (int i = 0; i < x; i++)
    {
        found = false;
        // for(auto itr = numbers.begin(); itr != numbers.end(); ++itr)
        map<int, int>::iterator it = numbers.begin();
        while (it != numbers.end())
        {
            if (it->first == questions[i])
            {
                answers[i] = it->second;
                numbers.erase(it->first);
                found = true;
                break;
            }
            ++it;
        }
        if (!found)
        {
            answers[i] = -1;
        }
    }

    for (int i = 0; i < x; i++)
    {
        cout << answers[i] << endl;
    }

    return 0;
}