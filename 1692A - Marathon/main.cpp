#include <cstdio>

using namespace std;

int main()
{
    int cases, timur, participantOne, participantTwo, participantThree, answer;

    scanf("%d", &cases);

    while (cases--)
    {
        answer = 0;
        scanf("%d %d %d %d", &timur, &participantOne, &participantTwo, &participantThree);

        if (participantOne > timur)
            answer++;
        if (participantTwo > timur)
            answer++;
        if (participantThree > timur)
            answer++;

        printf("%d\n", answer);
    }

    return 0;
}