#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    const string codeforces = "codeforces";
    int cases;
    char character;
    size_t found;

    scanf("%d", &cases);

    while (cases--)
    {
        cin >> character;
        found = codeforces.find(character);

        if (found == string::npos)
            printf("NO\n");
        else
            printf("YES\n");
    }

    return 0;
}
