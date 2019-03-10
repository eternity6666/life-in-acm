#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 10000 + 5;

int n;
int v[maxn];
int ar[maxn];
int main()
{
    freopen("in.txt", "r", stdin);

    cin >> n;
    fei(1, n)
        v[i] = 0;

    fei(1, n)
    {
        cin >> ar[i];
        if(ar[i] != i)
            v[ar[i]]++;
    }

    int ans = 0;
    fei(1, n)
        if(v[i] == 0)
            ans++;
    cout << ans << endl;
    return 0;
}


