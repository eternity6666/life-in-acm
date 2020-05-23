#include <bits/stdc++.h>
using namespace std;

int n, m;
set<int> se;
void add(int h)
{
    se.insert(h);
}

void query(int l, int r)
{
    set<int>::iterator sit;
    set<int> s2;
    int ans = 0;
    for (sit = se.begin(); sit != se.end(); ++sit)
        cout << *sit << " ";
    cout << endl;
    for (int i = l; i <= r; ++i)
    {
        bool flag = 0;
        s2 = se;
        do
        {
            flag = false;
            set<int> s3;
            for (sit = s2.begin(); sit != s2.end(); ++sit)
            {
                int tmp = *sit;
                if (tmp == 0)
                    continue;
                if (tmp <= i)
                    flag = true;
                s3.insert((tmp > i ? tmp - i : 0));
            }
            ans++;
            s2 = s3;
        } while (flag);
        cout << i << ": " << ans << endl;
    }
    se = s2;
    cout << ans << endl;
}

int main()
{
    cin >> n >> m;
    add(n);
    while (m--)
    {
        int code;
        cin >> code;
        if (code == 1)
        {
            int h;
            cin >> h;
            add(h);
        }
        else if (code == 2)
        {
            int l, r;
            cin >> l >> r;
            query(l, r);
        }
    }
    return 0;
}

/*
10
2: 1 1 1
2 6
0: 2 2 2 2
10 7
0: 3 3 3 2
7 1
0: 3 3
*/