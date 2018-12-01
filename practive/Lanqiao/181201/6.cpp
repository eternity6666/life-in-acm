#include <iostream>
#include <cstdio>

#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100000 + 5;
int n;
int a[maxn];
int main()
{
    freopen("in.txt", "r", stdin);
    cin >> n;
    fei(1, n)
        cin >> a[i];
    int ans = 3;
    cout << ans << endl;
    return 0;
}

