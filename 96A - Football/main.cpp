#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    string input;

    while (cin >> input)
    {
        if (input.length() > 7 && input.find("1111111") != string::npos || input.find("0000000") != string::npos)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
