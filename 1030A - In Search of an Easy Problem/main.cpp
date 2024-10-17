#include <cstdio>
using namespace std;

int main()
{
    int judges, input;
    bool isEasy = true;
    scanf("%d", &judges);

    for (int i = 0; i < judges; i++)
    {
        scanf("%d", &input);

        if (input == 1)
        {
            isEasy = false;
            break;
        }
    }

    isEasy ? printf("EASY\n") : printf("HARD\n");

    return 0;
}
