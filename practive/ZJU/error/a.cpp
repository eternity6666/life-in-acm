#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100 + 5;

int t;
int n, m;
struct node
{
    int h;
    bool st;
};
vector<node> ven, vem;
set<int>
int main()
{
    freopen("in.txt", "r", stdin);
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        fei(1, n)
        {
            node tmp;
            cin >> tmp.h;
            ven.push_back(tmp);
        }
        fei(1, m)
        {
            node tmp;
            cin >> tmp.h;
            vem.push_back(tmp);
        }
        fei(1, n)
            cin >> ven[i - 1].st;
        fej(1, m)
            cin >> vem[i - 1].st;
    }
    return 0;
}


