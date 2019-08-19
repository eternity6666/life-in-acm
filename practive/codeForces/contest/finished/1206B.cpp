#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a0, a1, a2;
    a0 = a1 = a2 = 0;
    long long ans = 0;
    for(int i = 0; i < n; ++i)
    {
        long long tmp; cin >>tmp;
        if(tmp < 0)
            a2++, ans += -tmp - 1;
        else if(tmp > 0)
            a1++, ans += tmp - 1;
        else
            a0++;
    }
    if(a2 % 2 == 0)
        ans += a0;
    else
    {
        if(a0 == 0)
            ans += 2;
        else
            ans += a0;
    }
    cout << ans << endl;
    return 0;
}