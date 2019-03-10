#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 1000 + 5;

struct node
{
    int x, y;
    long long a;
};

bool operator < (node a, node b)
{
    return a.a < b.a;
}

struct node2
{
    long long a;
    int i;
    bool v[maxn];
};

long long ar[maxn];
int n;
vector<node> ve1;
vector<node2> ve;

int main()
{
    freopen("in.txt", "r", stdin);
    cin >> n;
    fei(1, n)
    {
        cin >> ar[i];
        fej(1, i)
        {
            node tmp;
            tmp.x = i;
            tmp.y = j;
            tmp.a = ar[i] + ar[j];
            ve1.push_back(tmp);
        }
    }

    /*
    fei(1, n)
    {
        fej(i + 1, n)
        {
            node tmp;
            tmp.x = i;
            tmp.y = j;
            tmp.a = ar[i] + ar[j];
            ve1.push_back(tmp);
        }
    }
    */

    // cout << ve1.size() << endl;
    sort(ve1.begin(), ve1.end());
    node2 tmp4;
    fei(1,n)
        tmp4.v[i]= 0;
    node2 tmp2;
    tmp2.a = -1;
    // set<node>::iterator sit;
    vector<node>::iterator it;
    for(it = ve1.begin(); it != ve1.end(); it++)
    {
        node tmp = *it;
        if(tmp.a != tmp2.a)
        {
            // cout << 1 << endl;
            if(it != ve1.begin())
                ve.push_back(tmp2);
            node2 tmp3 = tmp4;
            tmp3.a = tmp.a;
            tmp3.i = 1;
            tmp3.v[tmp.x] = 1;
            tmp3.v[tmp.y] = 1;
            tmp2 = tmp3;
        }
        else
        {
            // cout << 2 << endl;
            if(tmp2.v[tmp.x] == 1 || tmp2.v[tmp.y] == 1)
                continue;
            else
            {
                tmp2.i++;
                tmp2.v[tmp.x] = 1;
                tmp2.v[tmp.y] = 1;
            }
        }
    }
    ve.push_back(tmp2);

    int ans = -1;
    vector<node2>::iterator vit;
    for(vit = ve.begin(); vit != ve.end(); vit++)
    {
        // cout << (*vit).a << ": " << (*vit).i << endl;
        if((*vit).i > ans)
            ans = (*vit).i;
    }
    // cout << endl;
    cout << ans << endl;
    return 0;
}


