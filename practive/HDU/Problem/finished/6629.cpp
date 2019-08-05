#include <iostream>
#include <cstring>
using namespace std;
const int maxn = 1e6 + 5;

string s;
int z[maxn];
int main()
{
    ios_base::sync_with_stdio(0); cin.tie();
    int t;
    cin >> t;
    while (t--)
    {
        memset(z, 0, sizeof(z));
        long long sum = 0;
        cin >> s;
        int n = s.length();
        for (int i = 1, l = 0, r = 0; i < n; ++i)
        {
            if (i <= r)
                z[i] = min(r - i + 1, z[i - l]);
            while (i + z[i] < n && s[z[i]] == s[i + z[i]])
                ++z[i];
            if (i + z[i] - 1 > r)
                l = i, r = i + z[i] - 1;
            sum += z[i] + (z[i] == n - i ? 0 : 1);
        }
        cout << sum << endl;
    }
    return 0;
}
