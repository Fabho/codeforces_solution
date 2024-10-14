#include <cstdio>

using namespace std;

int main()
{
    int limakWeight, bobWeight, answer = 0;

    scanf("%d %d", &limakWeight, &bobWeight);

    while (limakWeight <= bobWeight)
    {
        answer++;
        limakWeight *= 3;
        bobWeight *= 2;
    }

    printf("%d\n", answer);
    return 0;
}
