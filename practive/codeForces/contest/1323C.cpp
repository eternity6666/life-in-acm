#include <iostream>
using namespace std;

string s;

int main()
{
    int n;
    cin >> n;
    cin >> s;
    int l = 0, r = 0;
    for (int i = 0; i < n; ++i)
        if (s[i] == '(')
            l++;
        else
            r++;
    if (l != r)
        cout << -1 << endl;
    else
    {
        
    }
}