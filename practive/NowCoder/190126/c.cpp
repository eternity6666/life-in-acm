#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100 + 5;

int main()
{
    freopen("in.txt", "r", stdin);
    int n;
    cin >> n;
    int ans;
    bool flag = 0;
    fei(1, n - 1)
    {
        int tmp;
        cin >> tmp;
        if(tmp == i)
            continue;
        else
        {
            if(flag)
                continue;
            else
            {
                ans = i;
                flag = 1;
            }
        }
    }
    if(flag)
        cout << ans << endl;
    else
        cout << n << endl;
    return 0;
}

