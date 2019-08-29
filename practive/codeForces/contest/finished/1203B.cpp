#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


void solve()
{
    vector<int> ve;
    int n; cin >> n;
    for(int i = 1; i <= 4*n; i++)
    {
        int tmp; cin >> tmp;
        ve.push_back(tmp);
    }
    ve.push_back(0);
    sort(ve.begin(), ve.end());
    int area = ve[1]*ve[4*n];
    for(int i = 1; i <= n; i++)
    {
        if(ve[2*i-1]!=ve[2*i]||ve[4*n-2*i+1]!=ve[4*n-2*i+2]||ve[2*i-1]*ve[4*n-2*i+2]!=area)
        {
            cout << "NO" << endl;
            return ;
        }
    }
    cout << "YES" << endl;
}

int main()
{
    int q; cin >> q;
    while(q--)
    {
        solve();
    }
    return 0;
}
