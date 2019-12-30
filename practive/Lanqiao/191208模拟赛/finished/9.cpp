#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> ve(n + 10);
    long long ans = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> ve[i];
        if (i > 1)
        {
            int j = i;
            for (; j >= 1; j--)
                if (ve[j] > ve[i])
                    break;
            ans += i - j;
        }
    }
    cout << ans << endl;
    return 0;
}