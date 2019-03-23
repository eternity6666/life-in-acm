#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100 + 5;

int main()
{
    freopen("in.txt", "r", stdin);
    int n;
    cin >> n;
    string ans = "";
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            char a, t, b;
            cin >> a >> t >> b;
            if(b == 'T')
                ans = ans + (char)('0' + (int)(a - 'A' + 1));
        }
    }
    cout << ans << endl;
    return 0;
}


