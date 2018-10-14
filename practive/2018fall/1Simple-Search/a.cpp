#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fni(a, b) for(int i = a; i < b; i++)
#define fnj(a, b) for(int j = a; j < b; j++)
using namespace std;
const int maxn = 10;

char c[maxn][maxn];
int n, k, ans;
bool vx[maxn];
bool vy[maxn];

bool input();

int main()
{
    freopen("in.txt", "r", stdin);
    while(input())
    {

    }
    return 0;
}

bool input()
{
    cin >> n >> k;
    if(n + k < 0)
        return false;
    fni(0, n)
    {   vx[i] = vy[i] = 0;
        fnj(0, n)
            cin >> c[i][j];
    }
    ans = 0;
    return true;
}
