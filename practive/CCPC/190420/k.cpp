#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100 + 5;
const int mod = 1000000007;

int t;
int n;
int q;

int get(int a, int b);

int main()
{
    freopen("in.txt", "r", stdin);
    scanf("%d", &t);
    // cin >> t;
    while(t--)
    {
        // cin >> n;
        scanf("%d", &n);
        vector<int> ve;
        fei(1, n)
        {
            int tmp;
            scanf("%d", &tmp);
            // cin >> tmp;
            ve.push_back(tmp);
        }
        scanf("%d", &q);
        // cin >> q;
        while(q--)
        {
            int a, b;
            scanf("%d %d", &a, &b);
           // cin >> a >> b;
            int len = b + 1 - a;
            int ans = 0;
            switch(len % 4)
            {
                case 0:
                    ans = 0;
                    break;
                case 1:
                    fei(0, len / 4)
                    {
                        ans = get(ans, ve[a + 4 * i - 1]);
                    }
                    break;
                case 2:
                    fei(0, len / 4)
                    {
                        ans = get(ans, ve[a + 4 * i - 1]);
                        ans = get(ans, ve[a + 4 * i]);
                    }
                    break;
                case 3:
                    fei(0, len / 4)
                    {
                        ans = get(ans, ve[a + 4 * i]);
                    }
                    break;
                default:
                    ans = -1;
                    break;
            }
            printf("%d\n", ans);
            // cout << ans << endl;
        }
    }
    return 0;
}

int get(int a, int b)
{
    return a^b;
}

