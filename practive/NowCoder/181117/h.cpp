#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100 + 5;

/*
long long gcd(long long a, long long b)
{
    return (b > 0) ? gcd(b, a % b) : a;
}
*/

int main()
{
    freopen("in.txt", "r", stdin);
    long long n;

    while(cin >> n)
    {
        long long ans;
        if(n > 1)
        {
            ans = n + n - 1;
  //          cout << gcd(n, n - 1);
        }
        else
            ans = 2;
        cout << ans << endl;
    }
    return 0;
}

