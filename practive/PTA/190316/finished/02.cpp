#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100 + 5;

int main()
{
    freopen("in.txt", "r", stdin);

    int l, n;
    cin >> l >> n;

    string ans = "";
    int tmp = pow(26, l);
    n = tmp - n;
    for(int i = l; i >= 1; i--)
    {
        char tmp2 = 'a';
        tmp /= 26;
        tmp2 = 'a' + (n / tmp);
        ans = ans + tmp2;
        n = n % tmp;
    }
    cout << ans << endl;
    return 0;
}


