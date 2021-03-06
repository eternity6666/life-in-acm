#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100 + 5;

struct node
{
    long long a, b;
    double x;
};

bool cmp(node x, node y)
{
    return x.x > y.x;
}

int main()
{
    freopen("in.txt", "r", stdin);
    long long n;
    cin >> n;
    vector<node> ve;
    node tmp;
    long long temp = 0;
    fei(1, n)
    {
        cin >> tmp.a >> tmp.b;
        tmp.x = 1.0 * tmp.b / tmp.a;
        temp += tmp.b;
        ve.push_back(tmp);
    }
    sort(ve.begin(), ve.end(), cmp);
    long long ans = 0;
    fei(0, n - 1)
    {
        temp = temp - ve[i].b;
        ans = ans + ve[i].a * temp;
    }
    cout << ans << endl;
    return 0;
}

