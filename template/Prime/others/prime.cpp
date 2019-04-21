#include <bits/stdc++.h>
using namespace std;
const int maxn = 10000 + 5;

bool prime[maxn];

void got_prime();

int main()
{
    memset(prime, 1, maxn);
    freopen("prime.txt", "w", stdout);
    got_prime();
    int k = 0;
    for(int i = 2; i <= 10000; i++)
    {
        if(prime[i] && i >= 1000 && i <= 10000)
        {
            k++;
            if(k % 10 == 0)
            {
                cout << i << endl;
            }
            else
            {
                cout << i << " ";
                if(i < 10)
                    cout << " ";
                if(i < 100)
                    cout << " ";
                if(i < 1000)
                    cout << " ";
            }
        }
    }
    cout << endl;
    return 0;
}

void got_prime()
{
    for(int i = 2; i <= 10000; i++)
    {
        if(prime[i])
        {
            for(int j = 2; i * j <= 10000; j++)
            {
                prime[i * j] = 0;
            }
        }
    }
}
