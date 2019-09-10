#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
const int maxn = 210;
bool v[maxn];
struct node
{
    int x, y, num;
};
struct node2
{
    node no;
    int d;
};
bool cmp1(node a, node b)
{
    if (a.x != b.x)
        return a.x > b.x;
    return a.y < b.y;
}

bool cmp2(node a, node b)
{
    if (a.y != b.y)
        return a.y > b.y;
    return a.x < b.x;
}

bool cmp3(node2 a, node2 b)
{
    return a.no.num < b.no.num;
}

int main()
{
    int n;
    while (cin >> n)
    {
        if(n == 0) break;
        vector<node> ve(n + 3);
        for (int i = 1; i <= n; ++i)
        {
            ve[i].num = i;
            cin >> ve[i].x >> ve[i].y;
        }
        int sum1 = 0;
        vector<node2> ve1;
        fill(v + 1, v + n + 1, 1);
        sort(ve.begin() + 1, ve.begin() + n + 1, cmp1);
        for (int i = 1; i <= 8; ++i)
        {
            node2 tmp;
            tmp.no = ve[i];
            tmp.d = 1;
            ve1.push_back(tmp);
            // cout << tmp.no.num << " " << tmp.no.x << " " << tmp.no.y << endl;
            sum1 += ve[i].x;
            v[ve[i].num] = 0;
        }
        sort(ve.begin() + 1, ve.begin() + n + 1, cmp2);
        int count = 0;
        for (int i = 1; i <= n; ++i)
        {
            if (v[ve[i].num])
            {
                node2 tmp;
                tmp.no = ve[i];
                tmp.d = 2;
                ve1.push_back(tmp);
                sum1 += ve[i].y;
                v[ve[i].num] = 0;
                count++;
            }
            if (count >= 8)
                break;
        }
        int sum2 = 0;
        vector<node2> ve2;
        fill(v + 1, v + n + 1, 1);
        sort(ve.begin() + 1, ve.begin() + n + 1, cmp2);
        for (int i = 1; i <= 8; ++i)
        {
            node2 tmp;
            tmp.no = ve[i];
            tmp.d = 2;
            ve2.push_back(tmp);
            sum2 += ve[i].y;
            v[ve[i].num] = 0;
        }
        sort(ve.begin() + 1, ve.begin() + n + 1, cmp1);
        count = 0;
        for (int i = 1; i <= n; ++i)
        {
            if (v[ve[i].num])
            {
                node2 tmp;
                tmp.no = ve[i];
                tmp.d = 1;
                ve2.push_back(tmp);
                sum2 += ve[i].x;
                v[ve[i].num] = 0;
                count++;
            }
            if (count >= 8)
                break;
        }
        if(sum1 < sum2)
        {
            sort(ve2.begin(), ve2.end(), cmp3);
            cout << sum2 << endl;
            for(int i = 0; i < 16; ++i)
                cout << ve2[i].no.num << " " << ve2[i].no.x << " " << ve2[i].no.y << " " << ve2[i].d << endl;
        }
        else
        {
            sort(ve1.begin(), ve1.end(), cmp3);
            cout << sum1 << endl;
            for(int i = 0; i < 16; ++i)
                cout << ve1[i].no.num << " " << ve1[i].no.x << " " << ve1[i].no.y << " " << ve1[i].d << endl;
        }
        return 0;
    }
}
