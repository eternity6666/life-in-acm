#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100 + 5;

struct node
{
    int a;
    int b;
};

vector<node> ve;

int n;
bool cmp(node a, node b)
{
    if(a.b != b.b)
        return a.b < b.b;
    else
        return a.a < b.a;
}

bool get_ans()
{
    int ut = 0;
    fei(1, n)
    {
        ut += ve[i - 1].a;
        if(ut > ve[i - 1].b)
            return 0;
        ut += 2;
    }
    return 1;
}

int main()
{
    freopen("in.txt", "r", stdin);
    cin >> n;
    node tmp;
    fei(1, n)
    {
        cin >> tmp.a;
        ve.push_back(tmp);
    }
    fei(1, n)
        cin >> ve[i - 1].b;
    sort(ve.begin(), ve.end(), cmp);
    bool ans = get_ans();
    if(ans)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}

