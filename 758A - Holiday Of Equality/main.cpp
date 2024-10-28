#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int citizens, saving, maxValue = -1, answer = 0;
    vector<int> savings;
    scanf("%d", &citizens);

    for (int i = 0; i < citizens; i++)
    {
        scanf("%d", &saving);
        savings.push_back(saving);
        maxValue = max(maxValue, saving);
    }

    for (int i = 0; i < citizens; i++)
        answer += maxValue - savings[i];

    printf("%d", answer);

    return 0;
}
