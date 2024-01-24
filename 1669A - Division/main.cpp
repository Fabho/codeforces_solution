#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    string answer;
    int ratings, rating;
    scanf("%d", &ratings);

    while (ratings--)
    {
        scanf("%d", &rating);

        if (rating <= 1399)
            answer = "Division 4\n";
        else if (rating > 1399 && rating <= 1599)
            answer = "Division 3\n";
        else if (rating > 1599 && rating <= 1899)
            answer = "Division 2\n";
        else
            answer = "Division 1\n";

        cout << answer;
    }

    return 0;
}
