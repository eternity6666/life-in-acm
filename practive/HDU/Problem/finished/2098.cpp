#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fni(a, b) for(int i = a; i < b; i++)
#define fnj(a, b) for(int j = a; j < b; j++)
using namespace std;
const int maxn = 10000 + 5;
bool prime[maxn];

void got_prime();

int main()
{
    freopen("in.txt", "r", stdin);
    memset(prime, 1, maxn);
    got_prime();
    int a;
    while(~scanf("%d", &a) && a)
    {
        int ans = 0;
        fei(2, a / 2)
            if(i != a - i && prime[i] && prime[a - i])
                ans++;
        cout << ans << endl;
    }
    return 0;
}

void got_prime()
{
    fei(2, maxn)
    {
        if(prime[i])
            for(int j = 2; j * i <= maxn; j++)
                prime[i * j] = 0;
    }
}

/*
#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fni(a, b) for(int i = a; i < b; i++)
#define fnj(a, b) for(int j = a; j < b; j++)
using namespace std;

const int maxn = 10000 + 5;
bool prime[maxn];
set<int> s;

void got_prime();
bool is_prime(int i);

int main()
{
    freopen("in.txt", "r", stdin);
    memset(prime, 1, maxn);
    got_prime();
    int a;
    while(~scanf("%d", &a) && a)
    {
        int ans = 0;
        fei(1, a / 2)
            if(i != a -i && is_prime(i) && is_prime(a - i))
            {
                ans++;
                // cout << i << " ";
            }
        cout << ans << endl;
    }
    return 0;
}

void got_prime()
{
    fei(2, maxn)
    {
        if(prime[i])
        {
            for(int j = 2; j * i <= maxn; j++)
            {
                prime[i * j] = 0;
            }
            s.insert(i);
        }
    }
}

bool is_prime(int n)
{
    if(s.find(n) != s.end())
        return 1;
    else
        return 0;
}
*/
