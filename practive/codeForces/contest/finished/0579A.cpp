#include <iostream>
using namespace std;

int main()
{
    int x; cin >> x;
    int ans = 0;
    while(x)
    {
        ans += x & 1;
        x>>=1;
    }
    cout << ans << endl;
    return 0;
}
