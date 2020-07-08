#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include <cstring>
#include <cmath>
#include <map>
using namespace std;

vector<int> pa, ans;
int msum = -1;
int n, k, p;
void dfs(int last, int sum, int size)
{
    if (size > k)
        return;
    if (size == k && last != 0)
        return;
    if (size == k && last == 0)
    {
        if (sum > msum)
        {
            msum = sum;
            ans = pa;
        }
        if (sum < msum)
            return;
        if (sum == msum)
        {
            for (int i = 0; i < pa.size(); i++)
            {
                if (ans[i] > pa[i])
                    return;
                else if (ans[i] < pa[i])
                {
                    ans = pa;
                    break;
                }
            }
        }
        return;
    }
    int now = floor(sqrt(last));
    for (int i = now; i >= 1; i--)
    {
        if (size == 0 || i <= pa.back())
        {
            pa.push_back(i);
            dfs(last - pow(i, p), sum + i, size + 1);
            pa.pop_back();
        }
    }
}

int main()
{
    cin >> n >> k >> p;
    dfs(n, 0, 0);
    if (ans.size() == 0)
        cout << "Impossible" << endl;
    else
    {
        cout << n << " = ";
        for (int i = 0; i < k; i++)
        {
            if (i == 0)
                cout << ans[i] << "^" << p;
            else
                cout << " + " << ans[i] << "^" << p;
        }
        cout << endl;
    }

    return 0;
}
