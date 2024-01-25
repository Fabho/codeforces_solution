#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int layers;
    string hate = "I hate";
    string love = "I love";
    string output = "";
    string connector = " that ";
    string end = " it";

    scanf("%d", &layers);

    for (int x = 1; x <= layers; x++)
    {
        if (x % 2 != 0)
            output += hate;
        else
            output += love;

        if (x < layers)
            output += connector;
        else if (x == layers)
            output += end;
    }

    cout << output << '\n';

    return 0;
}