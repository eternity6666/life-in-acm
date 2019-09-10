#include <bits/stdc++.h>
using namespace std;
const int mod = 998244353;

int main()
{
    int f[100];
    f[0] = 0, f[1] = 1;
    for(int i = 2; i < 10; i++)
        cout << (f[i] = 3 * f[i-1] + 2 * f[i-2]) << " ";
    cout << endl;
    return 0;
}
