#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

bool cmp(char a, char b)
{
    if(tolower(a) != tolower(b))
        return tolower(a) < tolower(b);
    else
        return a < b;
}

int main()
{
    int n;
    cin >> n;
    char s[20];
    while(n--)
    {
        cin >> s;
        sort(s, s + strlen(s), cmp);
        do
        {
            cout << s << endl;
        } while (next_permutation(s, s + strlen(s), cmp));
    }
    return 0;
}
