#include <bits/stdc++.h>
#include <limits.h> // include INT_MIN, INT_MAX
#define fadd(i, a, b) for(int (i) = a; (i) <= b; (i)++)
#define fcut(i, a, b) for(int (i) = a; (i) >= b; (i)--)
#define ll long long
#define mem(a) memset((a), 0, sizeof(a))
using namespace std;
const int inf = 0x7f7f7f7f;
const int mod = 1e9 + 7;
const int maxn = 50 + 5;

int b[27];

int deal()
{
    int a[27][51];
    memset(a, 0, sizeof a);
    fadd(i, 0, 26)
        a[i][0] = 1;
    fadd(i, 1, 26)
        fadd(j, 1, 50)
            for(int k = 0; k <= b[i] && j - k * i >= 0; k++)
                a[i][j] += a[i - 1][j - k * i];
    int sum = 0;
    fadd(i, 1, 50)
        sum += a[26][i];
    return sum;
}

int main()
{
    freopen("in.txt", "r", stdin);
    int n;
    scanf("%d", &n);
    while(n--)
    {
        fadd(i, 1, 26)
            scanf("%d", &b[i]);
        cout << deal() << endl;
    }
    return 0;
}


