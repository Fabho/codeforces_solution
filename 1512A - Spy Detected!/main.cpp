#include <cstdio>
#include <map>

using namespace std;

int main()
{
    map<int, int> data;
    map<int, int> indexTrack;
    int cases, arrayLength, value, index;

    scanf("%d", &cases);

    while (cases--)
    {
        data.clear();
        scanf("%d", &arrayLength);

        for (int x = 0; x < arrayLength; x++)
        {
            scanf("%d", &value);
            data[value]++;
            indexTrack[value] = x;
        }

        for (map<int, int>::iterator it = data.begin(); it != data.end(); it++)
        {
            if (it->second == 1)
            {
                printf("%d\n", indexTrack[it->first] + 1);
                break;
            }
        }
    }
    return 0;
}