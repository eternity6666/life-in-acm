#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fni(a, b) for(int i = a; i < b; i++)
#define fnj(a, b) for(int j = a; j < b; j++)
using namespace std;

const int maxn = 100 + 5;

int n;

int all(int n);

int main()
{
    freopen("in.txt", "r", stdin);
    while(~scanf("%d", &n))
    {
        if(n == 1)
            cout << 0 << endl;
        else
        {
            cout << all(n) - 3 * (n - 1) * n * n << endl;
        }
    }
    return 0;
}

int all(int n)
{
    return n * n * n * (n * n * n - 1) / 2;
}
