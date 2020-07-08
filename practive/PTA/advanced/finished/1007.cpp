#include <iostream>
using namespace std;
const int maxn = 1e5 + 10;

int k;
int a[maxn], sum[maxn];
int main()
{
    int k;
    cin >> k;
    sum[0] = 0;
    bool flag = true;
    for (int i = 1; i <= k; ++i)
    {
        cin >> a[i];
        if (flag && a[i] >= 0)
            flag = false;
        sum[i] = sum[i - 1] + a[i];
    }
    if (flag)
    {
        cout << 0 << " " << a[1] << " " << a[k] << endl;
        return 0;
    }
    int max = -1, a1 = 1, a2 = k;
    for (int l = 1; l <= k; ++l)
    {
        for (int r = l; r <= k; ++r)
        {
            if (sum[r] - sum[l - 1] > max)
                max = sum[r] - sum[l - 1], a1 = l, a2 = r;
        }
    }
    cout << max << " " << a[a1] << " " << a[a2] << endl;
    return 0;
}