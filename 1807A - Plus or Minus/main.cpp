#include <cstdio>

using namespace std;

int main()
{
    int cases, a, b, c;

    scanf("%d", &cases);

    while (cases--)
    {
        scanf("%d %d %d", &a, &b, &c);

        a + b == c ? printf("+\n") : printf("-\n");
    }

    return 0;
}
