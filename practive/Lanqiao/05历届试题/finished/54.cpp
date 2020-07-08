#include <iostream>
using namespace std;
const int maxn = 1e6 + 5;
int a[maxn];

int findx(int x)
{
    return a[x] == x ? x : a[x] = findx(a[x]);
}
void merge(int x, int y)
{
    int xx = findx(x);
    int yy = findx(y);
    if (xx < yy)
        a[yy] = xx;
    else
        a[xx] = yy;
}

int main()
{
    int m, n;
    cin >> m >> n;
    for (int i = 1; i <= m * n; ++i)
        a[i] = i;
    int k;
    cin >> k;
    while (k--)
    {
        int a, b;
        cin >> a >> b;
        merge(a, b);
    }
    int count = 0;
    for (int i = 1; i <= m * n; ++i)
        if (a[i] == i)
            count++;
    cout << count << endl;

    return 0;
}
