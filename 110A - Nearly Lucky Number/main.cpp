#include <iostream>
using namespace std;

int main()
{
    long long input;
    int tmp, counter = 0;

    bool isNearlyLucky = false;

    cin >> input;

    while (input > 0)
    {
        tmp = input % 10;

        if (tmp == 4 || tmp == 7)
            counter++;

        input /= 10;
    }

    counter == 4 || counter == 7 ? cout << "YES\n" : cout << "NO\n";

    return 0;
}
