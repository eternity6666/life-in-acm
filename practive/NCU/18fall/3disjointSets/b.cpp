#include <iostream>
#include <vector>
#include <cstdio>
#include <set>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 30000 + 5;

int stu[maxn], n, m;
int findX(int x);
void merge(int a, int b);

int main()
{
    freopen("in.txt", "r", stdin);
    while(~scanf("%d %d", &n, &m))
    {
        if(n + m == 0)
            return 0;
        fei(0, n - 1)
            stu[i] = i;
        while(m--)
        {
            int k;
            scanf("%d", &k);
            int y, x;
            fei(1, k)
            {
                cin >> x;
                if(i == 1)
                    y = x;
                else
                    merge(y, x);
            }
        }
        int ans = 0;
        fei(0, n - 1)
            if(findX(i) == 0)
                ans++;
        cout << ans << endl;
    }
    return 0;
}

void merge(int a, int b)
{
    int x, y;
    x = findX(a);
    y = findX(b);

    if(x < y)
        stu[y] = x;
    if(y < x)
        stu[x] = y;
}

int findX(int x)
{
    return x == stu[x] ? x : stu[x] = findX(stu[x]);
}

