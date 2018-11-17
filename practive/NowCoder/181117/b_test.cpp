#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100 + 5;

long long f(vector<int> s)
{
    vector<int>::iterator it = s.begin();
    if(s.size() == 1)
        return *it;
    else
    {
        int tmp = *it;
        s.erase(it);
        return pow(tmp, f(s) % 2);
    }
}

int main()
{
    freopen("in.txt", "r", stdin);

    vector<int> a[] = {{1, 2, 3, 4}, {1, 2, 4, 3}, {1, 3, 2, 4}, {1, 3, 4, 2}, {1, 4, 2, 3}, {1, 4, 3, 2},
                       {2, 1, 3, 4}, {2, 1, 4, 3}, {2, 3, 1, 4}, {2, 3, 4, 1}, {2, 4, 1, 3}, {2, 4, 3, 1},
                       {3, 1, 2, 4}, {3, 1, 4, 2}, {3, 1, 2, 4}, {3, 1, 4, 2}, {3, 4, 1, 2}, {3, 4, 2, 1},
                       {4, 1, 2, 3}, {4, 1, 3, 2}, {4, 2, 1, 3}, {4, 2, 3, 1}, {4, 3, 1, 2}, {4, 3, 2, 1}};

    long long ans = 0;
    for(int i = 0; i < 24; i++)
    {
        long long tmp  = f(a[i]);
        if(i % 6 == 0)
            cout << endl;
        cout << tmp << " ";
        ans += tmp;
    }
    cout << ans << endl;
    return 0;
}

