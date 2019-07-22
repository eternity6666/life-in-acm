#include <bits/stdc++.h>
#include <limits.h> // include INT_MIN, INT_MAX
#define fadd(i, a, b) for(int (i) = a; (i) <= b; (i)++)
#define fcut(i, a, b) for(int (i) = a; (i) >= b; (i)--)
#define ll long long
#define mem(a) memset((a), 0, sizeof(a))
using namespace std;
const int inf = 0x7f7f7f7f;
const int mod = 1e9 + 7;
const int maxn = 1e2 + 5;

int a[maxn];

int main()
{
    freopen("in.txt", "r", stdin);
    int n;
    cin >> n;

    int sum = 0;
    fadd(i, 1, n)
    {
        cin >> a[i];
        if(i > 1)
            sum += a[i];
    }
    if(a[1] > sum)
        cout << 1 << endl << 1 << endl;
    else
    {
        set<int> se;
        se.insert(1);
        int sum2 = a[1];
        fadd(i, 2, n)
        {
            if(2 * a[i] <= a[1])
            {
                se.insert(i);
                sum2 += a[i];
            }
        }
        if(sum2 * 2 > a[1] + sum)
        {
            cout << se.size() << endl;
            set<int>::iterator it;
            for(it = se.begin(); it != se.end(); it++)
            {
                if(it == se.begin())
                    cout << *it;
                else
                    cout << " " << *it;
            }
            cout << endl;
        }
        else
            cout << 0 << endl;
    }
    return 0;
}


