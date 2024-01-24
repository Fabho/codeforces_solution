#include <cstdio>

using namespace std;

int main()
{
    int cases, a, b, c;

    scanf("%d", &cases);

    while (cases--)
    {
        scanf("%d %d %d", &a, &b, &c);

        if (a + b == c || a + c == b || b + c == a)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
