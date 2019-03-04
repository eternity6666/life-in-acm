#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 30000 + 5;
const int maxm = 500 + 5;

int n, m;
int s[maxn];

int findX(int x);
void merge(int x, int y);

int main()
{
    freopen("in.txt", "r", stdin);

    cin >> n >> m;
    fei(0, n - 1)
        s[i] = i;

    int t;
    fei(1, m)
    {
        int k, x;
        cin >> k >> x;
        if(i == 1)
            t = x;
        fej(2, k)
        {
            int tmp;
            cin >> tmp;
            merge(x, tmp);
        }
    }

    int num = 0;
    fei(0, n - 1)
        if(findX(t) == findX(i))
            num++;
    cout << num << endl;
    return 0;
}

int findX(int x)
{
    return x == s[x] ? x : s[x] = findX(s[x]);
}

void merge(int x, int y)
{
    int tx = findX(x);
    int ty = findX(y);
    if(tx != ty)
    {
        if(tx > ty)
        {
            int tmp = tx;
            tx = ty;
            ty = tmp;
        }
        s[ty] = tx;
    }
    return ;
}

