#include <bits/stdc++.h>
#include <limits.h> // include INT_MIN, INT_MAX
#define fadd(i, a, b) for(int (i) = a; (i) <= b; (i)++)
#define fcut(i, a, b) for(int (i) = a; (i) >= b; (i)--)
#define ll long long
#define mem(a) memset((a), 0, sizeof(a))
using namespace std;
const int inf = 0x7f7f7f7f;
const int mod = 1e9 + 7;

const int maxn = 1e6 + 5;

ll arr[3];

int main()
{
    // freopen("in.txt", "r", stdin);
    fadd(i, 0, 2)
        cin >> arr[i];
    sort(arr, arr + 3);
    ll a = arr[1] - arr[0];
    ll b = arr[2] - arr[1];
    if(a == 1)
    {
        if(b == 1)
            cout << 0 << endl;
        else if(b == 2)
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }
    else if(a == 2)
    {
        if(b == 1)
            cout << 1 << endl;
        else if(b == 2)
            cout << 1 << endl;
        else
            cout << 1 << endl;
    }
    else
    {
        if(b == 1)
            cout << 2 << endl;
        else if(b == 2)
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }
    cout << max(a, b) - 1 << endl;
    return 0;
}


