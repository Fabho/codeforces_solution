#include <cstdio>
using namespace std;

int main()
{
    int problems, petya, vasya, tonya, answer = 0;

    scanf("%d", &problems);

    while (problems--)
    {
        scanf("%d %d %d", &petya, &vasya, &tonya);

        if (petya + vasya + tonya > 1)
            answer++;
    }

    printf("%d\n", answer);

    return 0;
}