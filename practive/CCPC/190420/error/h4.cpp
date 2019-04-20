#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 1e5 + 5;
const int mod = 1000000007;

long long a[maxn], b[maxn], c[maxn], d[maxn];

int main()
{
    freopen("in.txt", "r", stdin);
    long long n;
    cin >> n;
    b[1] = c[1] = 1;
    a[1] = 0;
    fei(2, n)
    {
        a[i] = a[i - 1] + b[i - 1] + c[i - 1];
        b[i] = a[i - 1] + b[i - 1] + c[i - 1];
        c[i] = a[i - 1] + b[i - 1] + c[i - 1]; 
        d[i] = a[i] + c[i];
        cout << a[i] << "    " << b[i] << "    " << c[i] << "    " << d[i] << endl;
    }
    cout << d[n] << endl;
    return 0;
}


