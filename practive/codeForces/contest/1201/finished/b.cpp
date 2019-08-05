#include <iostream>
#include <algorithm>
using namespace std;
const int maxn = 1e5 + 10;

int n;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie();
    while(cin >> n)
    {
        long a[maxn];
        long long sum = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        bool ans = false;
        if(sum % 2 == 0)
        {
            //cout << sum << endl;
            sort(a, a + n);
            // cout << a[n-1] <<endl;
            if(a[n-1] <= sum - a[n-1])
                ans = true;
        }
        cout << (ans?"YES":"NO") << endl;
    }
    return 0;
}
