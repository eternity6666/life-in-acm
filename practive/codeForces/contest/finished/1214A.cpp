#include <bits/stdc++.h>
using namespace std;

int dol[] = {1, 2, 5, 10, 20, 50, 100};
int eur[] = {5, 10, 20, 50, 100, 200};
int n, d, e;

int main()
{
    cin >> n >> d >> e;
    int ans = 1e8;
    for(int i = 0; i * d <= n; i++)
    {
        int sumdol = i * d;
        int sumeur = (n - sumdol) / (5 * e) * 5 * e;
        int tmp = n - sumdol - sumeur;
        ans = min(tmp, ans);
    }
    cout << ans << endl;
    return 0;
}
