#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fni(a, b) for(int i = a; i < b; i++)
#define fnj(a, b) for(int j = a; j < b; j++)
using namespace std;

const int maxn = 100 + 5;

int main()
{
    freopen("in.txt", "r", stdin);
    string s;
    while(getline(cin, s)){
        if(s == "#")
            break;
        int len = s.length();
        int ans = 1;
        for(int i = 0; i < len; i++)
            if(s[i] == ' ')
                ans++;
        cout << ans << endl;
    }
    return 0;
}

