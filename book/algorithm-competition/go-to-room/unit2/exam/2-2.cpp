#include <bits/stdc++.h>
using namespace std;

#define usefre

int main()
{
#ifdef usefre
    freopen("2-2-in.txt", "r", stdin);
    freopen("2-2-out.txt", "w", stdout);
#endif
    vector<int> num;
    int n;
    while (cin >> n)
    {
        num.push_back(n);
    }
    int i;
    i = num.size() / 3;
    vector<int>::iterator it;
    for (it = num.begin(); it != num.end();)
    {
        int a = *it++;
        int b = *it++;
        int c = *it++;
        cout << "Case " << num.size() / 3 - i-- + 1 << ": ";
        int m = 0;
        for (; m <= 100; m++)
        {
            if (m % 3 == a && m % 5 == b && m % 7 == c)
            {
                cout << m;
                break;
            }
            else
                continue;
        }
        if (m == 101)
        {
            cout << "No answer";
        }
        if (i)
            cout << endl;
    }
}