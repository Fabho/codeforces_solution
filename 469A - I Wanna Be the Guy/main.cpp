#include <set>
#include <cstdio>
using namespace std;

int main()
{
    set<int> gameLevels;
    int levels, xIndexes, yIndexes, level;

    scanf("%d", &levels);
    scanf("%d", &xIndexes);

    for (int i = 0; i < xIndexes; i++)
    {
        scanf("%d", &level);
        gameLevels.insert(level);
    }

    scanf("%d", &yIndexes);

    for (int i = 0; i < yIndexes; i++)
    {
        scanf("%d", &level);
        gameLevels.insert(level);
    }

    gameLevels.size() == levels ? printf("I become the guy.\n") : printf("Oh, my keyboard!\n");

    return 0;
}
