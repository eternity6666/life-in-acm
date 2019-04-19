#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fni(a, b) for(int i = a; i < b; i++)
#define fnj(a, b) for(int j = a; j < b; j++)
using namespace std;

const int maxn = 100 + 5;

struct node{
    double x;
    double y;
}a, b, c, d;

struct node2{
    node s;
    node e;
};

bool operator < (node a, node b)
{
    if(a.x != b.x)
        return a.x < b.x;
    else
        return a.y < b.y;
}

int main()
{
    freopen("in.txt", "r", stdin);
    while(cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y >> d.x >> d.y)
    {
        node w, x;
        w.x = a.x;
        w.y = b.y;
        x.x = b.x;
        x.y = a.y;

        node y, z;
        y.x = c.x;
        y.y = d.y;
        z.x = d.x;
        z.y = c.y;

        node2 tmp;

        vector<node2> h1, s1;
        tmp.s = a;
        tmp.e = x;
        h1.push_back(tmp);
        tmp.s = w;
        tmp.e = b;
        h1.push_back(tmp);
        tmp.s = a;
        tmp.e = w;
        s1.push_back(tmp);
        tmp.s = b;
        tmp.e = x;
        s1.push_back(tmp);

        vector<node2> h2, s2;
        tmp.s = c;
        tmp.e = z;
        h2.push_back(tmp);
        tmp.s = y;
        tmp.e = d;
        h2.push_back(tmp);
        tmp.s = c;
        tmp.e = y;
        s2.push_back(tmp);
        tmp.s = d;
        tmp.e = z;
        s2.push_back(tmp);

        vector<node> ve;
        vector<node2>::iterator it;
        for(it = h2.begin(); it != h2.end(); it++)
        {
            node2 tmp1 = *it;
            if(tmp1.s.x > tmp1.e.x)
            {
                node tmptmp = tmp1.e;
                tmp1.e = tmp1.s;
                tmp1.s = tmptmp;
            }
            vector<node2>::iterator it2;
            for(it2 = s1.begin(); it2 != s1.end(); it2++)
            {
                tmp = *it2;
                if(tmp.s.y > tmp.e.y)
                {
                    node tmptmp = tmp.e;
                    tmp.e = tmp.s;
                    tmp.s = tmptmp;
                }
                if(tmp1.s.x <= tmp.s.x && tmp.s.x <= tmp1.e.x 
                && tmp.s.y <= tmp1.s.y && tmp1.s.y <= tmp.e.y)
                {
                    node tmptmp;
                    tmptmp.x = tmp.s.x;
                    tmptmp.y = tmp1.s.y;
                    ve.push_back(tmptmp);
                    // cout << "yes";
                }
                    // cout << endl;
            }
        }

        for(it = h1.begin(); it != h1.end(); it++)
        {
            node2 tmp1 = *it;
            if(tmp1.s.x > tmp1.e.x)
            {
                node tmptmp = tmp1.e;
                tmp1.e = tmp1.s;
                tmp1.s = tmptmp;
            }
            vector<node2>::iterator it2;
            for(it2 = s2.begin(); it2 != s2.end(); it2++)
            {
                tmp = *it2;
                if(tmp.s.y > tmp.e.y)
                {
                    node tmptmp = tmp.e;
                    tmp.e = tmp.s;
                    tmp.s = tmptmp;
                }
                if(tmp1.s.x <= tmp.s.x && tmp.s.x <= tmp1.e.x 
                && tmp.s.y <= tmp1.s.y && tmp1.s.y <= tmp.e.y)
                {
                    node tmptmp;
                    tmptmp.x = tmp.s.x;
                    tmptmp.y = tmp1.s.y;
                    ve.push_back(tmptmp);
               //      cout << "yes";
                }
            // cout << endl;
            }
        }

        double ans = 0;
        if(ve.size() == 0 || ve.size() == 1)
            ans = 0;
        else if(ve.size() == 2)
            ans = abs(ve[0].x - ve[1].x) * abs(ve[0].y - ve[1].y);
        else
        {
            sort(ve.begin(), ve.end());
            ans = abs(ve[0].x - ve[3].x) * abs(ve[0].y - ve[3].y);
        }
        printf("%.2lf\n", ans);
    }
    return 0;
}

