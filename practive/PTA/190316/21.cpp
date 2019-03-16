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
int n, m, k;
vector<node> ve;
int main()
{
    freopen("in.txt", "r", stdin);
    cin >> n >> m;
    fei(1, m)
    {
        node tmp;
        cin >> tmp.a >> tmp.b;
        ve.push_back(tmp);
    }
    cin >> k;
    while(k--)
    {

    }
    return 0;
}


