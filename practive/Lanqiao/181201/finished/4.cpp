#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);
    string s;
    cin >> s;
    vector<int> x;
    int len = s.length();
    char c = s[0];
    int tmp = 0;
    for(int i = 0; i < len; i++)
    {
        if(c == s[i])
            tmp++;
        else
        {
            c = s[i];
            // cout << c << endl;
            if(tmp >= 2)
                x.push_back(tmp);
            tmp = 1;
        }
    }
    if(tmp >= 2)
        x.push_back(tmp);
    vector<int>::iterator it;
    int ans = 0;
    for(it = x.begin(); it != x.end(); it++)
    {
        ans = ans + (*(it) / 2);
    }
    cout << ans << endl;
    return 0;
}

