#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100 + 5;

int main()
{
    freopen("in.txt", "r", stdin);
    int a, b;
    cin >> a >> b;
    int tmp = a * b;
    int ans = 0;
    while(tmp / 10 != 0)
    {
        ans = ans * 10 + tmp % 10;
        tmp /= 10;
    }
    ans = ans * 10 + tmp;
    cout << ans << endl;
    return 0;
}


