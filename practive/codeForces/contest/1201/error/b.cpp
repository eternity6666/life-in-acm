#include <iostream>
#include <algorithm>
using namespace std;
const int maxn = 2e5 + 10;

int n;
int a[maxn];

string deal()
{
    int x, y;
    x = 0, y = 1;
    while(a[x] != 0 && a[y] != 0)
    {
        cout << a[x] << ' ' << a[y] << endl;
        a[y] = a[y] - a[x];
        a[x] = 0;
        if(a[y] != 0)
        {
            x = y;
            y++;
        }
        else
        {
            x = y + 1;
            y = y + 2;
        }
    }
    if(a[x] + a[y] == 0)
        return "YES";
    return "NO";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie();
    while(cin >> n)
    {
        for(int i = 0; i < n; i++)
            cin >> a[i];
        a[n] = a[n + 1] = 0;
        sort(a, a + n);
        cout << deal() << endl;
    }
    return 0;
}
