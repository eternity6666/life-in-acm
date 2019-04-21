#include <bits/stdc++.h>
using namespace std;
// const long long maxn = 1e9 + 5;
const int maxn = 1e9 + 5;

bool prime[maxn];

void got_prime();

int main()
{
    fill(prime, prime + maxn, true);
    freopen("prime.out", "w", stdout);
    // cout << 1 << endl;
    for(int i = 2; i <= maxn; i++)
        if(prime[i])
        {
            cout << i << " " << endl;
            for(int j = 2; j * i <= maxn; j++)
                prime[i * j] = 0;
        }
    return 0;
}

