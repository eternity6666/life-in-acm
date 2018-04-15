#include <bits/stdc++.h>
using namespace std;

#define fre1 freopen("./tmp1.txt", "r", stdin)
#define fre2 freopen("./tmp2.txt", "r", stdin)
int a[100000] = {0};

int main()
{
    // fre1;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        for (int j = 0; j < k; j++)
        {
            int id;
            cin >> id;
            if (k != 1)
            {
                a[id] = 1;
            }
        }
    }
    int m;
    cin >> m;
    int flags = 0;
    while (m--)
    {
        int id;
        cin >> id;
        if (a[id] == 0)
        {
            if (flags == 0)
            {
                flags++;
            }
            else
                cout << " ";
            printf("%05d",id);
            a[id] = 1;
        }
    }
    if (!flags)
    {
        cout << "No one is handsome" << endl;
    }
    return 0;
}