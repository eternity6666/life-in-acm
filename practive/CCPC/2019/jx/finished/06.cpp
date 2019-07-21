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

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

int main()
{
    freopen("in.txt", "r", stdin);
    int n;
    while(~scanf("%d", &n))
    {
        int a[5];
        memset(a, 0, sizeof(a));
        string s;
        cin >> s;
        int len = s.length() - 1;
        fadd(i, 0, len)
            if(s[i] == 'a')
                a[1]++;
            else if(s[i] == 'v')
                a[2]++;
            else if(s[i] == 'i')
                a[3]++;
            else if(s[i] == 'n')
                a[4]++;
        int zi = 1;
        int mu = 1;
        fadd(i, 1, 4)
        {
            mu *= (len + 1);
            zi *= a[i];
        }
        if(zi == 0)
            cout << "0/1" << endl;
        else
        {
            int tmp = gcd(zi, mu);
            cout << zi / tmp << "/" << mu / tmp << endl;
        }
    }
    return 0;
}


