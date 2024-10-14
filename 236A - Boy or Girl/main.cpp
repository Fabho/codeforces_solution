#include <cstdio>
#include <iostream>
#include <set>

using namespace std;

int main()
{
    string input;
    set<char> characters;

    cin >> input;

    for (int i = 0; i < input.size(); i++)
        characters.insert(input[i]);

    if (characters.size() % 2 != 0)
        printf("IGNORE HIM!\n");
    else
        printf("CHAT WITH HER!\n");

    return 0;
}
