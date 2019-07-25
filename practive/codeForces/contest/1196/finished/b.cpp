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

int arr[maxn];
int tmp[maxn];

int main()
{
    freopen("in.txt", "r", stdin);
    int q;
    cin >> q;
    while(q--)
    {
        int n, k;
        cin >> n >> k;
        int cnt = 0;
        fadd(i, 1, n)
        {
            cin >> arr[i];
            if(arr[i] & 1)
                arr[cnt++] = i;
        }
        /*
        cout << cnt << " " << k << endl;
        fadd(i, 0, cnt - 1)
            cout << arr[i] << " ";
        cout << endl;
        */
        if(cnt < k || (k % 2 != cnt % 2))
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            fadd(i, 0, k - 2)
                cout << arr[i] << " ";
            cout << n << endl;
        }

    }
    return 0;
}


