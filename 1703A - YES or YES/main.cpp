#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int cases;
    string input;

    scanf("%d", &cases);

    while (cases--)
    {
        cin >> input;
        if ('y' == tolower(input[0]) && 'e' == tolower(input[1]) && 's' == tolower(input[2]))
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
