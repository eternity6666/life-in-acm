#include <bits/stdc++.h>
#include <limits.h> // include INT_MIN, INT_MAX
#define fadd(i, a, b) for(int (i) = a; (i) <= b; (i)++)
#define fcut(i, a, b) for(int (i) = a; (i) >= b; (i)--)
#define ll long long
#define mem(a) memset((a), 0, sizeof(a))
using namespace std;
const int inf = 0x7f7f7f7f;
const int mod = 1e9 + 7;
const int maxn = 2e4 + 5;

int arr[maxn];

int main()
{
    freopen("in.txt", "r", stdin);
    int n, b;
    scanf("%d %d", &n, &b);
    fadd(i, 1, n)
        scanf("%d", &arr[i]);
    sort(arr + 1, arr + n + 1);
    int ans = 0;
    int sum = 0;
    fcut(i, n, 1)
    {
        sum += arr[i];
        ans++;
        if(sum >= b)
            break;
    }
    cout << ans << endl;
    return 0;
}


