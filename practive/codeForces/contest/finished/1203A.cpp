#include <iostream>
using namespace std;
const int maxn = 210;

int a[maxn], n;
int b[maxn];

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        cin >> n;
        int k = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            if (i != 1)
                b[i] = a[i] - a[i - 1];
        }
        bool flag = 0;
        if (n <= 3)
            flag = 1;
        else
        {
            b[1] = a[1] - a[n];
            bool tmp = (b[1] == -1 || b[1] == n - 1);
            int count = 0;
            for (int i = 1; i <= n; i++)
            {
                // cout << b[i] << (i == n ? "\n" : " ");
                if (tmp == 1)
                {
                    if (b[i] == -1)
                        count++;
                }
                else
                {
                    if (b[i] == 1)
                        count++;
                }
            }
            flag = (count == (n - 1));
        }
        cout << (flag ? "YES" : "NO") << endl;
    }
    return 0;
}
