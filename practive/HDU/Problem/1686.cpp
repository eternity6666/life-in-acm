#include <bits/stdc++.h>
#include <limits.h> // include INT_MIN, INT_MAX
#define fadd(i, a, b) for(int (i) = a; (i) <= b; (i)++)
#define fcut(i, a, b) for(int (i) = a; (i) >= b; (i)--)
#define ll long long
#define mem(a) memset((a), 0, sizeof(a))
using namespace std;
const int inf = 0x7f7f7f7f;
const int mod = 1e9 + 7;
const int maxn = 1e6 + 5;

int pre[maxn];
string s, p;
int n, m;

void getpre()
{
    memset(pre, 0, n + 1);
    fadd(i, 0, n - 1)
    {
        int j = i;
        while(j > 0)
        {
            j = pre[j];
            if(p[j] == p[i]) {
                pre[i + 1] = j + 1;
                break;
            }
        }
    }
}

int kmp()
{
    int i = 0, j = 0;
    int ans = 0;
    while(i < m)
    {
        if(j < n && s[i] == p[j])
            j++;
        else
        {
            while(j > 0)
            {
                j = pre[j];
                if(s[i] == p[j])
                {
                    j++;
                    break;
                }
            }
        }
        if(j == n)
            ans++;
        i++;
    }
    return ans;
}

int main()
{
    freopen("in.txt", "r", stdin);
    int t;
    scanf("%d", &t);
    while(t--)
    {
        cin >> p >> s;
        n = p.length();
        m = s.length();
        getpre();
        fadd(i, 0, n - 1)
            cout << pre[i] << " ";
        cout << endl;
        cout << kmp() << endl;
    }
    return 0;
}


