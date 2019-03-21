#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fni(a, b) for(int i = a; i < b; i++)
#define fnj(a, b) for(int j = a; j < b; j++)
using namespace std;

const int maxn = 100 + 5;

int main()
{
    freopen("in.txt", "r", stdin);

    long long n;
    cin >> n;
    while(n--)
    {
        int a, b;
        cin >> a >> b;
        a = a % 100;
        b = b % 100;
        int ans = a + b;
        cout << ans % 100 << endl;
    }
    return 0;
}

