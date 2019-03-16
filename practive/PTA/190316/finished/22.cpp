#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100000 + 5;

int n;
int x[maxn];
int x2[maxn];

int findT(int t)
{
    // cout << 1 << endl;
    // cout << t << x[t] << endl;
    if(x[t] == -1)
        return 1;
    else
    {
        if(x2[t] == 1)
            return x2[t] = findT(x[t]) + 1;
        else
            return x2[t];
    }
}

int main()
{
    freopen("in.txt", "r", stdin);
    cin >> n;
    fei(1, n)
    {
        cin >> x[i];
        x2[i] = 1;
    }
    int max = 0;
    int ans = 0;
    set<int> se;
    fei(1, n)
    {
        if(x2[i] == 1 && x[i] != -1)
            x2[i] = findT(x[i]) + 1;
        if(x2[i] > max)
        {
            max = x2[i];
            ans = 1;
            se.clear();
            se.insert(i);
        }
        else if(x2[i] == max)
        {
            se.insert(i);
            // ans++;
        }
    }

    // cout << ans << endl;
    cout << max << endl;
    set<int>::iterator it;
    for(it = se.begin(); it != se.end(); it++)
    {
        if(it != se.begin())
            cout << " ";
        cout << *it;
    }
    cout << endl;
    return 0;
}


