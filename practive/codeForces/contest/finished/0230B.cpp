/*
#include <iostream>
#include <cmath>
#include <cstring>
#include <set>
using namespace std;
const int maxn = 1e6 + 10;

bool v[maxn];
long long p[maxn];
int len = 1;

bool deal(long long x)
{
    set<long long> se;
    long long tmp = sqrt(x);
    for(int i = 0; i < len; i++)
    {
        if(p[i]>tmp)
            break;
        if(x%p[i]==0)
        {
            se.insert(p[i]);
            se.insert(x/p[i]);
        }
        if(se.size()>3)
            return 0;
    }
    if(se.size()==3)
        return 1;
    return 0;
}

int main()
{
    int n; cin >> n;
    p[0]=1;
    memset(v, 1, sizeof(v));
    for(int i = 2; i <= 1e6; i++)
        if(v[i])
        {
            p[len++] = i;
            for(int j = 2; i*j <= 1e6; j++)
                v[j] = 0;
        }
    while(n--)
    {
        long long x; cin >> x;
        if(deal(x)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
*/

/*
#include <iostream>
#include <cstring>
#include <map>
using namespace std;
const int maxn = 1e6 + 10;

bool v[maxn];
map<long long, int> ma;

int main()
{
    memset(v, 1, sizeof(v));
    for(int i = 2; i < maxn; i++)
        if(v[i])
        {
            ma[(long long)i*i] = 1;
            for(int j = 2; j <= maxn / i; i++)
                v[j] = 0;
        }
    int n; cin >> n;
    while(n--)
    {
        long long x; cin >> x;
        cout << (ma[x]==1?"YES":"NO") << endl;
    }
    return 0;
}
*/

/*
#include <iostream>
#include <cstring>
#include <set>
#include <cmath>
using namespace std;

const int maxn = 1e6+10;
int n;
bool v[maxn];

int main()
{
    cin >> n;
    memset(v, 1, sizeof(v));
    for(int i = 2; i <= n; i++)
        if(v[i])
            for(int j = 2; i*j<=n; j++)
                v[i*j] = 0;
    while(n--)
    {
        long long d; cin >> d;
        int x = sqrt(d);
        if(x*x==d && v[x]) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
*/

#include <iostream>
#include <map>
using namespace std;

bool isPrime(int n)
{
    for(int i = 2; i*i <= n; ++i)
        if(n % i == 0)
            return false;
    return true;
}

map<long long, int> ma;
int main()
{
    ma[4] = 1;
    for(int i = 3; i <= 1000000; i += 2)
        if(isPrime(i))
            ma[(long long)i*i] = 1;
    int n; cin >> n;
    while(n--)
    {
        long long x; cin >> x;
        cout << (ma[x]==0?"NO":"YES") << endl;
    }
    return 0;
}