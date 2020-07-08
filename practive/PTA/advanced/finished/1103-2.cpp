#include <iostream>
#include <stack>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <vector>
using namespace std;
const int maxn = 400 + 5;
int n, k, p, nn[maxn], mf = -1;
vector<int> ve, ans;
// int cc = 0;
void dfs(int last, int sum, int size)
{
    // cc++;
    if (last < k - size)
        return;
    if (size > k)
        return;
    if (size == k && last != 0)
        return;
    if (size == k && last == 0)
    {
        if (sum > mf)
        {
            mf = sum;
            ans = ve;
        }
        if (sum < mf)
            return;
        if (sum == mf)
        {
            for (int j = 0; j < ve.size(); ++j)
            {
                if (ans[j] > ve[j])
                    return;
                else if (ans[j] < ve[j])
                {
                    ans = ve;
                    break;
                }
            }
        }
        return;
    }
    int now = floor(sqrt(last));
    for (int i = now; i >= 1; i--)
    {
        if (size == 0 || i <= ve.back())
        {
            ve.push_back(i);
            dfs(last - pow(i, p), sum + i, size + 1);
            ve.pop_back();
        }
    }
}

int main()
{
    cin >> n >> k >> p;
    for (int i = 1; i <= n; ++i)
    {
        int ans;
        int tmp1 = i;
        int tmp2 = tmp1 * tmp1;
        int tmp3 = tmp2 * tmp2;
        switch (p)
        {
        case 7:
            ans = tmp1 * tmp2 * tmp3;
            break;
        case 6:
            ans = tmp2 * tmp3;
            break;
        case 5:
            ans = tmp1 * tmp3;
            break;
        case 4:
            ans = tmp3;
            break;
        case 3:
            ans = tmp1 * tmp2;
            break;
        case 2:
            ans = tmp2;
            break;
        }
        if (ans > n)
            break;
        nn[i] = ans;
    }
    dfs(n, 0, 0);
    // cout << cc << endl;
    if (ans.size() == 0)
        cout << "Impossible\n";
    else
    {
        printf("%d = ", n);
        for (int i = 0; i < k; ++i)
            cout << ans[i] << "^" << p << (i == k - 1 ? "\n" : " + ");
    }
    return 0;
}