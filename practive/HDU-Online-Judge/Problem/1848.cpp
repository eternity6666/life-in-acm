#include <bits/stdc++.h>
using namespace std;
const int maxn = 1000;
int f[15], nim;

bool judge(int tmp);
bool cmp(int n);
int main()
{
    freopen("in.txt", "r", stdin);
    f[1] = 1;
    f[2] = 2;
    for(int i = 3; i <= 15; i++)
        f[i] = f[i - 1] + f[i - 2];

    int m, n, p;
    while(~scanf("%d %d %d", &m, &n, &p))
    {
        if(m == 0 && n == 0 && p == 0)
        {
            break;
        }
        nim = m ^ n ^ p;
        //cout << nim << endl;
        bool flag = 0;
        if(cmp(m))
            flag = 1;
        if(cmp(n))
            flag = 1;
        if(cmp(p))
            flag = 1;
        //cout << flag << endl;
        if(!flag)
            cout << "Fibo" << endl;
        else
            cout << "Nacci" << endl;
    }
    return 0;
}

bool cmp(int n)
{
    if(nim ^ n <= n && judge(n - nim ^ n))
        return 1;
}

bool judge(int tmp)
{
    for(int i = 1; i <= 15; i++)
        if(tmp == f[i])
            return true;
    return false;
}
