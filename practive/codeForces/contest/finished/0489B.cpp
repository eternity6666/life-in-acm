#include <bits/stdc++.h>
using namespace std;
int a[110], b[110], n, m, i, j, ans;
int main()
{
    cin >> n; for(i = 1; i <= n; i++) cin >> a[i];
    sort(a+1, a+n+1);
    cin >> m; for(i = 1; i <= m; i++) cin >> b[i];
    sort(b+1, b+m+1);
    i = j = 1;
    while(i<=n&&j<=m)
    {
        if(a[i]-b[j]<=1&&a[i]-b[j]>=-1) i++, j++, ans++;
        else if(a[i]>b[j]) j++;
        else i++;
    }
    cout << ans << endl;
    return 0;
}
