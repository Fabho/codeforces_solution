#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int cases, a, b, c;

    scanf("%d", &cases);

    while (cases--)
    {
        vector<int> numbers;

        scanf("%d %d %d", &a, &b, &c);

        numbers.push_back(a);
        numbers.push_back(b);
        numbers.push_back(c);

        sort(numbers.begin(), numbers.end());

        printf("%d\n", numbers[1]);
    }

    return 0;
}
