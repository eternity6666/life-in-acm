#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 10000 + 5;

bool v[maxn][maxn];
int n, m;
int k;

bool pd()
{
    int np;
    bool tmp[maxn][maxn];
    fei(1, n)
        fej(1, n)
            tmp[i][j] = v[i][j];
    cin >> np;
    while(np--)
    {
        int a;
        cin >> a;
        fei(1, n)
            if(tmp[a][i])
                tmp[a][i] = tmp[i][a] = 0;
    }
    fei(1, n)
        fej(1, n)
            if(tmp[i][j])
                return false;
    return true;
}

int main()
{
    freopen("in.txt", "r", stdin);
    cin >> n >> m;
    fei(1, n)
        fej(1, n)
            v[i][j] = 0;

    fei(1, m)
    {
        int a, b;
        cin >> a >> b;
        v[a][b] = 1;
    }

    cin >> k;
    while(k--)
    {
       if(pd())
           cout << "NO" << endl;
       else
           cout << "YES" << endl;
    }
    return 0;
}


