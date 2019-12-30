#include <iostream>
#include <map>
using namespace std;
const int maxn = 1e5 + 10;

map<long long, int> ma;
int a[maxn];

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n * m; ++i)
    {
        long long tmp;
        cin >> tmp;
        if (tmp > 1e5)
            ma[1e5]++;
        else if (tmp == 0)
            continue;
        else
            ma[tmp]++;
    }
    int h;
    cin >> h;
    a[0] = 0;
    map<long long, int>::iterator mit;
    for (int i = 1; i <= h; i++)
    {
        int count = 0;
        for (mit = ma.begin(); mit != ma.end(); ++mit)
            if (mit->first >= i)
                count += mit->second;
        cout << (a[i] = a[i - 1] + count) << endl;
    }
    return 0;
}
