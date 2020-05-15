#include <iostream>
#include <cmath>
#include <set>
using namespace std;
const int maxn = 4e4 + 10;

int al[maxn], ar[maxn];
int bl[maxn], br[maxn];
int n, m, k, x, y, alen, blen;
set<int> se;

int okay(int l1, int r1, int l2, int r2);

int main()
{
    cin >> n >> m >> k;
    int sk = sqrt(k);
    for (int i = 1; i <= sk; i++)
        if (k % i == 0)
            se.insert(i);
    alen = blen = 0;
    x = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> y;
        if (y == 1 && x == 1)
            ar[alen] = i;
        else if (y == 1 && x == 0)
            al[alen] = ar[alen] = i;
        else if (y == 0 && x == 1)
            alen++;
        x = y;
    }
    // for (int i = 0; i <= alen; i++)
        // cout << al[i] << "-" << ar[i] << endl;
    x = 0;
    for (int i = 1; i <= m; i++)
    {
        cin >> y;
        if (y == 1 && x == 1)
            br[blen] = i;
        else if (y == 1 && x == 0)
            bl[blen] = br[blen] = i;
        else if (y == 0 && x == 1)
            blen++;
        x = y;
    }
        // for (int i = 0; i <= blen; i++)
        //     cout << bl[i] << "-" << br[i] << endl;
    int ans = 0;
    for (int i = 0; i <= alen; i++)
        for (int j = 0; j <= blen; j++)
            ans += okay(al[i], ar[i], bl[j], br[j]);
    cout << ans << endl;
    return 0;
}

int okay(int l1, int r1, int l2, int r2)
{
    int a1 = r1 - l1 + 1;
    int a2 = r2 - l2 + 1;
    if (a1 * a2 < k)
        return 0;
    else if (a1 * a2 == k)
        return 1;
    int ans = 0;
    set<int>::iterator sit;
    for (sit = se.begin(); sit != se.end(); sit++)
    {
        int st1 = *sit;
        int st2 = k / st1;
        for (int i = 0; i < a1; ++i)
        {
            if (a1 - i < st1 && a1 - i < st2)
                break;
            for (int j = 0; j < a2; ++j)
            {
                if (a2 - j < st1 && a2 - j < st2)
                    break;
                if (a1 - i >= st1 && a2 - j >= st2)
                    ans++;
                if (a1 - i >= st2 && a2 - j >= st1 && st1 != st2)
                    ans++;
                // cout << i << "-" << j << ": " << ans << endl;
            }
        }
    }
//    cout << ans << endl;
    return ans;
}