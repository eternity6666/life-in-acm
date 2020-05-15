#include <iostream>
using namespace std;
const int maxn = 200 + 5;

int g[maxn];

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int flag = -1;
        for (int i = 0; i < n; ++i)
        {
            cin >> g[i];
            if (g[i] % 2 == 0)
                flag = i;
        }
        if (flag == -1 && n == 1)
            cout << -1 << endl;
        else
        {
            if (flag != -1)
                cout << 1 << endl
                     << flag+1 << endl;
            else
            {
                cout << 2 << endl;
                int count = 0;
                for (int i = 0; i < n; i++)
                    if (g[i] % 2 == 1)
                    {
                        count++;
                        if (count == 1)
                            cout << i + 1 << " ";
                        else if (count == 2)
                            cout << i + 1 << endl;
                        else
                            break;
                    }
            }
        }
    }
    return 0;
}