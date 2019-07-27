#include <bits/stdc++.h>
#include <limits.h> // include INT_MIN, INT_MAX
#define fadd(i, a, b) for(int (i) = a; (i) <= b; (i)++)
#define fcut(i, a, b) for(int (i) = a; (i) >= b; (i)--)
#define ll long long
#define mem(a) memset((a), 0, sizeof(a))
using namespace std;
const int inf = 0x7f7f7f7f;
const int mod = 1e9 + 7;
const int maxn = 1e5 + 5;

bool v[maxn];
int STEP, MOD;

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a%b);
}

bool judge()
{
    return gcd(STEP, MOD) == 1;
}

/*
bool judge()
{
    set<int> se;
    int tmp = 0;
    se.insert(tmp);
    fadd(i, 1, MOD)
    {
        tmp = (tmp + STEP) % MOD;
        se.insert(tmp);
    }
    
    set<int>::iterator it;
    for(it = se.begin(); it != se.end(); it++)
        cout << *it << " ";
    cout << endl;
    return se.size() == MOD;
}
*/

int main()
{
    freopen("in.txt", "r", stdin);
    int i = 0;
    while(~scanf("%d %d", &STEP, &MOD))
    {
        printf("%10d%10d    ", STEP, MOD);
        if(judge())
            cout << "Good Choice\n";
        else
            cout << "Bad Choice\n";
        cout << endl;
    }
    return 0;
}


