#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int ans = 0;
        // for(int i = 0; i <= c; ++i)
        //     if(a + i > b + c - i)
        //         ans++;
        if (b - a >= c)
            ans = 0;
        else if (b + c >= a)
            ans = (c - b + a) / 2 + ((c - b + a) % 2 == 1);
        else
            ans = c + 1;
        cout << ans << endl;
    }
    return 0;
}
