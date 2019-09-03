#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];
        int ans = 0;
        int right_min = INT_MAX;
        for(int i = n - 1; i >= 0; i--)
        {
            if(a[i] > right_min)
                ans++;
            right_min = min(right_min, a[i]);
        }
        cout << ans << endl;
    }
    return 0;
}