#include <iostream>
using namespace std;

char vowels[] = {'A', 'O', 'Y', 'E', 'U', 'I', 'a', 'o', 'y', 'e', 'u', 'i'};

bool isVowel(char c)
{
    for (int i = 0; i < 12; ++i)
        if (vowels[i] == c)
            return true;
    return false;
}

char deal(char c)
{
    if ('a' <= c && c <= 'z')
        return c;
    return c - 'A' + 'a';
}

int main()
{
    string s;
    while (cin >> s)
    {
        int len = s.length();
        for (int i = 0; i < len; ++i)
            if (isVowel(s[i]))
                continue;
            else
                printf(".%c", deal(s[i]));
        cout << endl;
    }
    return 0;
}
