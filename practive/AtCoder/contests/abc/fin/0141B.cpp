#include <bits/stdc++.h>
using namespace std;

bool is(string s)
{
    int len = s.length();
    for (int i = 0; i < len; ++i)
        if (i % 2 == 1 && s[i] == 'R')
            return false;
        else if (i % 2 == 0 && s[i] == 'L')
            return false;
    return true;
}

int main()
{
    string s;
    cin >> s;
    cout << (is(s)?"Yes":"No") << endl;
    return 0;
}
