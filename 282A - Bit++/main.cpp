#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int operations;
    string instruction;
    int result = 0;
    bool shouldIncrease;

    scanf("%d", &operations);

    while (operations--)
    {
        cin >> instruction;
        shouldIncrease = instruction.find("++") != string::npos;

        shouldIncrease ? result++ : result--;
    }

    printf("%d\n", result);

    return 0;
}
