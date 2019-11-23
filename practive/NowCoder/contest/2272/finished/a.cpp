#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> ve;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ve.push_back(x);
    }
    int ans = 0;
    int i = 0;
    while (i < n)
    {
        int j = i + 1;
        while (j < n && ve[j] - 1 == ve[j - 1])
        {
            j++;
        }
        if(j<n)
        {
            if(ans<j-i-2)
                ans = j - i - 2;
        }
        else
        {
            if(ans<j-i-1)
                ans = j - i - 2;
        }
        i = j;
    }
    cout << ans << endl;
    return 0;
}