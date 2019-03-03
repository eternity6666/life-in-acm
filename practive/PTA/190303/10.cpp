#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 30000 + 5;
const int maxm = 500 + 5;

int s[maxn];

int findX(int x);
void merge(int a, int b);

int main()
{
    freopen("in.txt", "r", stdin);
    int n, m;
    cin >> n >> m;

    fei(0, n - 1)
        s[i] = i;

    fei(1, m)
    {
        int k;
        cin >> k;
        int x = 0;
        fej(1, k)
        {
            int tmp;
            cin >> tmp;
            if(j == 1)
                x = tmp;
            else
            {
                if(x > tmp)
                {
                    int tmp2 = x;
                    x = tmp;
                    tmp = tmp2;
                }
                merge(x, tmp);
            }
        }
    }
    int ans = 0;
    fei(0, n - 1)
    {
        if(findX(i) == 0)
            ans++;
    }
    cout << ans << endl;
    return 0;
}

int findX(int x)
{
    return x == s[x] ? x : s[x] = findX(s[x]);
}

void merge(int a, int b)
{
    a = findX(a);
    b = findX(b);
    if(a != b)
    {
        if(a > b)
        {
            int tmp = a;
            a = b;
            b = tmp;
        }
        s[b] = a;
    }
}

