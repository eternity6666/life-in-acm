#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100 + 5;

int n, m;
int ans[maxn][maxn];
bool v[maxn][maxn];

bool get(int a, int b)
{
    if(a >= 1 && b >= 1 && a <= n && b <= m)
        return true;
    else
        return false;
}

int main()
{
    freopen("in.txt", "r", stdin);

    cin >> n >> m;
    int x, y;
    x = y = 1;

    fei(1, n)
        fej(1, m)
            v[i][j] = 0;

    int a = 1;
    fei(2, n + m)
    {
        if(i % 2)
        {
            fej(1, i - 1)
            {
                if(get(j, i -j))
                if(v[j][i - j] == 0)
                {
                    ans[j][i - j] = a;
                    a++;
                    v[j][i - j] = 1;
                }
            }
        }
        else
        {
            fej(1,i - 1)
            {
                if(get(i - j, j))
                if(v[i - j][j] == 0)
                {
                    ans[i - j][j] = a;
                    a++;
                    v[i - j][j] = 1;
                }
            }
        }
    }

    fei(1, n)
    {
        fej(1, m)
        {
            if(j == 1)
                cout << ans[i][j];
            else
                cout << " " << ans[i][j];
        }
        cout << endl;
    }
    return 0;
}


