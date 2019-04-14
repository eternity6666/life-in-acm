#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 1e6 + 5;

int t;
bool prime[maxn];
int n;

bool deal();
void get_prime();

int main()
{
    freopen("in.txt", "r", stdin);
    cin >> t;
    // long long a = 10e18 + 5;
    // cout << a << endl;
    get_prime();

    int k = 0;
    int m = 0;
    fei(4, 10000)
        if(prime[i] == false && prime[i + 246] == false)
            k++;
        else if(prime[i] && prime[i + 246])
            m++;
    cout << 10000 - 4 << ": " << k << ": " << m << endl;
    cout << k + m << endl;
    /*
    while(t--)
    {
        cin >> n;

        if(!deal())
            cout << -1 << endl;
    }
    */
    return 0;
}

bool deal() 
{
    fei(4, maxn)
        if(prime[i] == false && prime[i + n] == false)
        {
            cout << i << " " << i + n << endl;
            return true;
        }
    return false;
}

void get_prime()
{
    fill(prime, prime + maxn, true);

    fei(2, maxn)
        if(prime[i])
            for(int j = 2; j * i <= maxn; j++)
                prime[i * j] = false;
}
