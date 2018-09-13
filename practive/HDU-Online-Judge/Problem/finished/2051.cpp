#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        stack<int> ans;
        while(n > 0)
        {
            int tmp = n % 2;
            ans.push(tmp);
            n = n / 2;
        }
        while(ans.size() > 0)
        {
            cout << ans.top();
            ans.pop();
        }
        cout << endl;
    }
    return 0;
}
