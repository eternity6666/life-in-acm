#include <bits/stdc++.h>
#include <limits.h> // include INT_MIN, INT_MAX
#define fadd(i, a, b) for(int (i) = a; (i) <= b; (i)++)
#define fcut(i, a, b) for(int (i) = a; (i) >= b; (i)--)
#define ll long long
#define mem(a) memset((a), 0, sizeof(a))
using namespace std;
const int inf = 0x7f7f7f7f;
const int mod = 1e9 + 7;

const int maxn = 100 + 5;


int main()
{
    freopen("in.txt", "r", stdin);
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, m;
        scanf("%d %d", &n, &m);
        int array[maxn];
        fadd(i, 1, n)
            scanf("%d", &array[i]);
        sort(array + 1, array + n + 1);
        /*
        fadd(i, 1, n)
            cout << array[i] << ' ';
        cout << endl;
        */
        int max = (100 - array[1]) * (100 - array[1]);
        cout << max << endl;
    }
    return 0;
}


