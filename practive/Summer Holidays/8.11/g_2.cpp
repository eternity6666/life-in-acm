#include <bits/stdc++.h>
using namespace std;
const int mod = 1000000007;

int main()
{
    int n;
    cin >> n;
    int ans = 0 ;
    ans = (n * n % mod - 3 * n % mod + 2 ) / 2 * (n * n % mod -3 * n % mod + 12) % mod /12; 
    cout << ans % mod << endl;
}
