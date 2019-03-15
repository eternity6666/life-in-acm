#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fni(a, b) for(int i = a; i < b; i++)
#define fnj(a, b) for(int j = a; j < b; j++)
using namespace std;

const int maxn = 20 + 5;

long long a[maxn];
long long b[maxn];
long long c[maxn];

int main()
{
    freopen("in.txt", "r", stdin);
    int x;
    cin >> x;

    a[2] = 1;
    b[2] = 0;
    
    fei(3, 20)
    {
        a[i] = a[i - 1] * (i - 1) + b[i - 1];
        b[i] = i * a[i - 1];
    }

    c[0] = 1;
    fei(1, 20)
        c[i] = c[i - 1] * i;

    while(x--)
    {
        int n;
        cin >> n;
        double ans = 1.0 * a[n] / c[n] * 100;
        printf("%.2lf", ans);
        cout << "%" << endl;
    }
    return 0;
}

