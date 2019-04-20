#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 1e9 + 5;
const int mod = 1000000007;

int t;
int n;
int q;
// int array[maxn];

int get(int a, int b);

int main()
{
    freopen("in.txt", "r", stdin);
    cin >> t;
    while(t--) 
    {
        cin >> n;
        /*
        fei(1, n)
            cin >> array[i];
            */
        vector<int> ve;
        fei(1, n)
        {
            int tmp;
            cin >> tmp;
            ve.push_back(tmp);
        }
        cin >> q;
        while(q--)
        {
            int a, b;
            cin >> a >> b;
            int ans = 0;
            fei(a, b)
                ans = get(ans, ve[i - 1]);
            /*
            fei(a, b)
                ans = get(ans, i);
                */
            cout << ans << endl;
        }
    }
    return 0;
}

int get(int a, int b)
{
    return a^b;
}

