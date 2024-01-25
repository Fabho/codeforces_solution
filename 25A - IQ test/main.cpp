#include <cstdio>

using namespace std;

int main()
{
    int numbers, value, evenCount = 0, evenIndex, oddCount = 0, oddIndex;

    scanf("%d", &numbers);

    for (int x = 0; x < numbers; x++)
    {
        scanf("%d", &value);

        if (value % 2 == 0)
        {
            evenCount++;
            evenIndex = x;
        }
        else
        {
            oddCount++;
            oddIndex = x;
        }
    }

    evenCount == 1 ? printf("%d\n", evenIndex + 1) : printf("%d\n", oddIndex + 1);

    return 0;
}