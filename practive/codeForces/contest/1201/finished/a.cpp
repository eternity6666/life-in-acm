#include <iostream>
#include <cstring>
using namespace std;
const int maxn = 1e3 +10;
const int inf = 0x3f3f3f3f;

int n, m;
int a[maxn][5];

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n >> m;
    memset(a, 0, sizeof(a));
    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for(int j = 0; j < m; j++)
            a[j][s[j] - 'A']++;
    }
    int ans = 0;
    // for(int i = 0; i < m; i++)
    // {
    //     for(int j = 0; j < 5; j++)
    //         cout << a[i][j] << (j == 4? "\n":" ");
    // }
    for(int i = 0; i < m; i++)
    {
        int tmp;
        cin >> tmp;
        int max = -1;
        for(int j = 0; j < 5; j++)
            if(max < a[i][j])
                max = a[i][j];
        // cout << max << " ";
        ans += tmp * max;
    }
    cout << ans << endl;
    return 0;
}
