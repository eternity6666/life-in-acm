#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100 + 5;

struct node
{
    int a, b;
};

bool cmp(node a, node b)
{
    if(a.b != b.b)
        return a.b > b.b;
    else
        return a.a < b.a;
}

int main()
{
    freopen("in.txt", "r", stdin);

    vector<node> ve;
    int n;
    cin >> n;
    node tmp;
    int temp = 0;
    fei(1, n)
    {
        cin >> tmp.a >> tmp.b;
        temp += tmp.b;
        ve.push_back(tmp);
    }
    sort(ve.begin(), ve.end(), cmp);

    int ans = 0;
    fei(1, n)
    {
        temp -= ve[i - 1].b;
        ans = ans + ve[i - 1].a * temp;
    }
    cout << ans << endl;
    return 0;
}

