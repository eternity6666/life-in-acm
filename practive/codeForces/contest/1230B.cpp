#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if (n == 1)
    {
        if(k==0)
            cout << s << endl;
        else
            cout << 0 << endl;
    }
    else
    {
        int cnt = 0;
        for (int i = 0; i < n; ++i)
        {
            if (cnt == k)
                break;
            if (i == 0)
            {
                if (s[i] != '1')
                    s[i] = '1', cnt++;
            }
            else
            {
                if (s[i] != '0')
                    s[i] = '0', cnt++;
            }
            if (cnt == k)
                break;
        }
        cout << s << endl;
    }
    return 0;
}
