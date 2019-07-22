#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
using namespace std;
const int maxn = 100;
int chance;
int left1;
char s[maxn], s2[maxn];
int win, lose;

void guess(char);

int main()
{
    int rnd;
    while (scanf("%d%s%s", &rnd, s, s2) == 3 && rnd != -1)
    {
        cout << "Round " << rnd << endl;
        win = lose = 0;
        left1 = strlen(s);
        chance = 7;
        for (int i = 0; i < strlen(s2); i++)
        {
            guess(s2[i]);
            if (win || lose)
                break;
        }
        if (win)
            cout << "You win.\n";
        else if (lose)
            cout << "You lose.\n";
        else
            cout << "You chickened out.\n";
    }
    return 0;
}

void guess(char ch)
{
    int bad = 1;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == ch)
        {
            left1--;
            s[i] = ' ';
            bad = 0;
        }
    }
    if (bad)
    {
        --chance;
    }
    if (!chance)
    {
        lose = 1;
    }
    if (!left1)
    {
        win = 1;
    }
}