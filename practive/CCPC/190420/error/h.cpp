#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 1e9 + 5;
const int mod = 1000000007;

long long a[maxn], b[maxn];

int main()
{
    freopen("in.txt", "r", stdin);
    long long n;
    cin >> n;
    a[1] = b[1] = 1;
    fei(2, n)
    {
        a[i] = 2 * (a[i - 1] + b[i - 1]) % mod;
        b[i] = 2 * (a[i - 1] + b[i - 1]) % mod;
    }
    cout << a[n] << endl;
    return 0;
}


