#include <bits/stdc++.h>
#include <limits.h> // include INT_MIN, INT_MAX
#define fadd(i, a, b) for(int (i) = a; (i) <= b; (i)++)
#define fcut(i, a, b) for(int (i) = a; (i) >= b; (i)--)
#define ll long long
#define mem(a) memset((a), 0, sizeof(a))
using namespace std;
const int inf = 0x7f7f7f7f;
const int mod = 1e9 + 7;

const int maxn = 1e6 + 5;

int main()
{
    freopen("in.txt", "r", stdin);
    int n;
    cin >> n;
    getchar();
    while(n--)
    {
        string s;
        getline(cin, s);
        int len = s.length();
        int d = 0;
        fadd(i, 0, len)
        {
            if(s[i] == ' ' || i == len)
            {
                fcut(j, i - 1, d)
                    cout << s[j];
                if(i != len)
                {
                    cout << " ";
                    d = i + 1;
                }
            }
        }
        cout << endl;
    }
    return 0;
}


