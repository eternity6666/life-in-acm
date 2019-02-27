#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fni(a, b) for(int i = a; i < b; i++)
#define fnj(a, b) for(int j = a; j < b; j++)
using namespace std;

const int maxn = 100 + 5;

int c, n, m;

long long a[25];
long long b[25];

int main()
{
    freopen("in.txt", "r", stdin);
    a[0] = 1;
    fei(1,20)
        a[i] = a[i - 1] * i; 
    b[0] = 0;
    b[1] = 1;
    b[2] = 1;
    b[3] = 2;
    fei(4,20)
        b[i] = (i - 1) * (b[i - 1] + b[i - 2]);
    cin >> c;
    while(c--)
    {
        cin >> n >> m;
        long long ans = a[n] / a[m] / a[n - m] * b[m];
        cout << ans << endl;
    }
    return 0;
}

